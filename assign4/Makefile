a.out: asgn4_17CS30007_main.c y.tab.c lex.yy.c 
	gcc asgn4_17CS30007_main.c y.tab.c lex.yy.c -lfl

y.tab.c: asgn4_17CS30007.y
	yacc -dtv asgn4_17CS30007.y

lex.yy.c: asgn4_17CS30007.l y.tab.h
	flex asgn4_17CS30007.l

y.tab.h: asgn4_17CS30007.y
	yacc -dtv asgn4_17CS30007.y

clean: 
	rm -f y.tab.c y.tab.h lex.yy.c y.output a.out && clear

test:
	make clean && make && ./a.out < test.c
