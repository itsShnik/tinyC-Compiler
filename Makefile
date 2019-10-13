
a.out: lex.yy.o parser.tab.o translator.o
	g++ lex.yy.o parser.tab.o translator.o -lfl

translator.o: translator.cpp translator.h
	g++ -c translator.h
	g++ -c translator.cpp

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

parser.tab.o: parser.tab.c
	g++ -c parser.tab.c

lex.yy.c: lexer.l parser.tab.c translator.h
	flex lexer.l

parser.tab.c: parser.y
	bison -dtv parser.y -W
	
clean:
	rm -f lex.yy.c parser.tab.c parser.tab.h lex.yy.o parser.tab.o translator.o parser.output a.out translator.h.gch && clear

run: a.out
	./a.out < TestFiles/test1.c > Test\ Outputs/quads1.out
	./a.out < TestFiles/test2.c > Test\ Outputs/quads2.out
	./a.out < TestFiles/test3.c > Test\ Outputs/quads3.out
	./a.out < TestFiles/test4.c > Test\ Outputs/quads4.out
	./a.out < TestFiles/test5.c > Test\ Outputs/quads5.out

