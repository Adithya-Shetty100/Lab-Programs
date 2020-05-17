a.out:square1.o square.o
	gcc square1.o square.o
square1.o:square1.c square.h
	gcc -c square1.c
square.o:square.c square.h
	gcc -c square.c



