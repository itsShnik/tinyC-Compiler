a.out: lex.yy.c
	gcc lex.yy.c -lfl

lex.yy.c:	ass3_17CS10030.l ass3_17CS10030.c
		flex ass3_17CS10030.l ass3_17CS10030.c
        
clean:
		rm a.out lex.yy.c

test:
		./a.out < ass3_17CS10030_test.c
