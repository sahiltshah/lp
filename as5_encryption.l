%{

	void encrypt_and_print(char word[])
	{
		if(is_special(word))
			

	}

%}

%%

[A-Ba-b]+ {
			
		    encrypt_and_print(yytext);
		  }
[ ]+ {
		printf(" ");
}

[0-9]+ {
		 encrypt_number_and_print(yytext);
}
%%


main()
{
	yylex();
	printf("\n Encryption complete!\n");
}