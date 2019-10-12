a.out: ass3_17CS30007_main.o lex.yy.o
	gcc ass3_17CS30007_main.o lex.yy.o -lfl

ass3_17CS30007_main.o: ass3_17CS30007_main.c tokens.h
	gcc -c ass3_17CS30007_main.c -lfl

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c -lfl

lex.yy.c: ass3_17CS30007.l tokens.h
	flex ass3_17CS30007.l

clean:
	rm -f a.out ass3_17CS30007_main.o lex.yy.o lex.yy.c

test:
	make
	./a.out < ass3_17CS30007_test.c
