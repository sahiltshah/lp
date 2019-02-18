%{

enum yytokentype
{
	NUMBER=300,
	ADD=301,
	SUB=302,
	MUL=303,
	DIV=304,
	ABS=305,
	EOL=306
};
int yylval;
%}



%%
"+" { return ADD;}
"-" { return SUB;}
"*" { return MUL;}
"/" { return DIV;}
"|" { return ABS;}
[0-9]+ { yylval = atoi(yytext); return NUMBER;}
\n { return EOL;}
[ \t] {}
. { printf("\n some random weird character!");}
%%

main()
{
	int tok;
	while(tok=yylex())
	{
		printf("%d",tok);
		if(tok==NUMBER)
			printf(" = %d\n",yylval);
		else printf("\n");
	}
}