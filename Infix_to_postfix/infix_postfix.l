%option noyywrap nodefault yylineno

%{
	#include <bits/stdc++.h>
	#include "infix_postfix.h"
	#include "infix_postfix.tab.h"
	using namespace std;    
%}

%%
"+" |
"-" |
"*" |
"/" |
"|" |
"(" |
")" { cout << yytext[0] << endl; return yytext[0]; }
[0-9]+ { yylval.d = atoi(yytext); cout << yylval.d << endl; return NUMBER; }
\n { return EOL; }
"//".*
[ \t] { /* ignore whitespace */ }
. {  }

%%