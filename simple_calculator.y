%{
#include <stdio.h>	
%}

%token NUMBER
%token ADD SUB MUL DIV ABS
%token EOL

%%

calclist: calclist exp EOL { printf("=%d\n",$1);}
;

%%