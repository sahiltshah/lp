c167255@uselab155:~$ bison -d yfile
bison: yfile: cannot open: No such file or directory
c167255@uselab155:~$ flex lfile 
flex: can't open lfile
c167255@uselab155:~$ g++ tabcfile yy.lex.c -lfl
g++: error: tabcfile: No such file or directory
g++: error: yy.lex.c: No such file or directory
c167255@uselab155:~$ ./a.out
bash: ./a.out: No such file or directory
c167255@uselab155:~$ 

