a.out: main.o libmylib.a 
	gcc main.o -L. -lmylib

main.o: main.c myl.h
	gcc -Wall -c main.c

libmylib.a: ass2_17CS10030.o
	ar -rcs libmylib.a ass2_17CS10030.o

ass2_17CS10030.o: ass2_17CS10030.c myl.h
	gcc -Wall -c ass2_17CS10030.c

clean:
	rm a.out main.o libmylib.a ass2_17CS10030.o
