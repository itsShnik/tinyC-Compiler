a.out: y.tab.o lex.yy.o 
	g++ lex.yy.o y.tab.o -lfl

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c 
	g++ -c y.tab.c

lex.yy.c: asgn4_17CS10030.l
	flex asgn4_17CS10030.l

y.tab.c: asgn4_17CS10030.y
	yacc -dtv asgn4_17CS10030.y

clean: 
	rm -f lex.yy.c y.tab.c lex.yy.o y.tab.o y.tab.h a.out && clear
