%option noyywrap nodefault yylineno case-insensitive

%{

#include <bits/stdc++.h>
using namespace std;

struct sym_entry
{
	string filename;
	int lineno;
};

map<string, vector<sym_entry> > symbols_table;

string currfilename;

void print_table();

%}



%%

a |
an |
and |
are |
as |
at |
be |
but |
for |
in |
is |
it |
of |
on |
or |
that |
the |
this |
to

[a-z]+(\'(s|t))? {
	sym_entry cur_tok;
	cur_tok.filename = currfilename;
	cur_tok.lineno = yylineno;

	string tokname(yytext);

	symbols_table[tokname].push_back(cur_tok);
	}

.|\n
%%

int main(int argc, char* argv[])
{
	if(argc==1)
	{
		currfilename = "(stdin)";
		yylineno = 1;
		yylex();
	}
	else
	{
		for(int i=1; i<argc; i++)
		{
			FILE *f = fopen(argv[i], "r");
			string tmp(argv[i]);
			currfilename = "(" + tmp + ")";
			yyrestart(f);
			yylineno = 1;
			yylex();
			fclose(f);
		}
	}

	print_table();
}

void print_table()
{
	map<string, vector<sym_entry> >::iterator it;

	cout<<endl;

	for(it=symbols_table.begin(); it!=symbols_table.end(); it++)
	{
		cout << "Symbol table entry: ";

		cout << it->first << endl ;

		vector<sym_entry> sec; 
		sec=it->second;

		for(int i=0; i<sec.size(); i++)
		{
			cout << "filename:" << sec[i].filename << " Line number:" << sec[i].lineno << endl;
		}

		cout<<endl;
	}
}