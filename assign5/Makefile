a.out: y.tab.o lex.yy.o 
	g++ -std=c++11 lex.yy.o y.tab.o -lfl

lex.yy.o: lex.yy.c
	g++ -std=c++11 -c lex.yy.c

y.tab.o: y.tab.c
	g++ -std=c++11 -c y.tab.c

lex.yy.c: asgn4_17CS10030.l y.tab.h
	flex asgn4_17CS10030.l

y.tab.c: asgn4_17CS10030.y
	yacc -dtv asgn4_17CS10030.y -W

y.tab.h: asgn4_17CS10030.y
	yacc -dtv asgn4_17CS10030.y -W

clean:
	rm -f lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o y.output a.out


