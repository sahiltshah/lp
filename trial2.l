%{
	
void simply_modify(char word[],int length)
{
	
}

%}


%%

[A-Za-z]+ { yytext[2]='c';
			printf("\nString input is %s   %d %d\n",yytext,yyleng,yytext[yyleng]);}

%%

main()
{
	yylex();
	printf("\n done with input! ");
}

