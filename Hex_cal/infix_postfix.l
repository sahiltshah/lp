%option noyywrap nodefault yylineno

%{
	#include <bits/stdc++.h>
	#include "infix_postfix.h"
	#include "infix_postfix.tab.h"
	using namespace std;
	int to_integer(string s);    
%}

%%
"+" |
"-" |
"*" |
"/" |
"|" |
"(" |
")" { cout << yytext[0] << endl; return yytext[0]; }
[0-9A-F]+ { string s(yytext); yylval.d = to_integer(s); cout << yylval.d << endl; return NUMBER; }
\n { return EOL; }
"//".*
[ \t] { /* ignore whitespace */ }
. {  }

%%

int to_integer(string s)
{
	int factor = 1;
	int term = 0;

	for(int i=s.size()-1; i>=0; i--)
	{
		if(s[i]<='9' && s[i]>='0')term += factor * (s[i] - '0'); 
		else if(s[i]=='A')term += factor * 10;
		else if(s[i]=='B')term += factor * 11;
		else if(s[i]=='C')term += factor * 12;
		else if(s[i]=='D')term += factor * 13;
		else if(s[i]=='E')term += factor * 14;
		else if(s[i]=='F')term += factor * 15; 
		factor *= 16;
	}
	return term;
}