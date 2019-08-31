a.out: lex.yy.o y.tab.o asgn4_17CS10030_main.o
	gcc lex.yy.o y.tab.o asgn4_17CS10030_main.o -lfl

asgn4_17CS10030_main.o: asgn4_17CS10030_main.c
	gcc -c asgn4_17CS10030_main.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: asgn4_17CS10030.l y.tab.h
	flex asgn4_17CS10030.l

y.tab.c: asgn4_17CS10030.y
	yacc -dtv asgn4_17CS10030.y -W

y.tab.h: asgn4_17CS10030.y
	yacc -dtv asgn4_17CS10030.y -W

clean:
	rm lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o asgn4_17CS10030_main.o y.output a.out

test: 
	./a.out < asgn4_17CS10030_test.c
