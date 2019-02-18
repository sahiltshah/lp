%{
int dummy_variable=0;

%}




%%

"samarjit" {printf("\nOrissa");}
"vipin" {printf("\nJharkhand");}

%%

main()
{
	yylex();
	printf("\nHey this is a trial: ");
}