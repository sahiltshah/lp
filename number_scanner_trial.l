%{
	int nothing=0;

%}




%%

"+" { printf(" PLUS");}
"-" { printf(" MINUS");}
"*" { printf(" MULTIPLIED");}
"/" { printf(" DIVIDED");}
[0-9]+ { printf(" DIGIT:%s",yytext);}
\n { printf(" new line\n");}
[ \t] { printf(" space");}
~ {} { printf(" Some weird character");}
%% 

main()
{
	yylex();

}