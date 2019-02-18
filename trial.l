%{
	
int p=0,q=0,r=0,randomc=0;

%}


%%


a {printf("\na");}
b {printf("\nb");}
c {printf("\nc");}
defghijklm {printf("\ndefghijklm");}
n {printf("\nn");}
o {printf("\no");}
p {printf("\np");}
abcdefgh {printf("\nabcdefgh");}
ijklmnop {printf("\nijklmnop");}
abcdefghij {printf("\nabcdefghij");}
ghijklmnop {printf("\nghijklmnop");}






. {randomc++;printf("\n incrementing random");}


%%

main()
{
	yylex();
	printf("p:%d q:%d r:%d random:%d",p,q,r,randomc);
}