%option noyywrap nodefault yylineno

%{
	#include "octal_cal.h"
	#include "octal_cal.tab.h"
	using namespace std; 
%}

%%
"+" |
"-" |
"*" |
"/" |
"|" |
"(" |
")"	{ cout << yytext[0] << endl; return yytext[0]; }
[0-9A-F]+	{ string s(yytext); yylval.d = to_integer(s); cout << yylval.d << endl; return NUMBER; }
\n 	{ return EOL; }
"//".*
[ \t] {  }
. {  }

%%

int to_integer(string s){
	int factor = 1;
	int term = 0;

	for(int i=s.size()-1; i>=0; i--){
		if(s[i]<='7' && s[i]>='0')term += factor * (s[i] - '0'); 
		factor *= 8;
	}
	return term;
}