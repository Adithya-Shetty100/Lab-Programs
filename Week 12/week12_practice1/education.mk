a.out:education1.o education.o
	gcc education1.o education.o
education1.o:education1.c education.h
	gcc -c education1.c 
education.o:education.c education.h
	gcc -c education.c

