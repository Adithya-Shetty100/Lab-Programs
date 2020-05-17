a.out:student1.o student.o
	gcc student1.o student.o
student1.o:student1.c student.h
	gcc -c student1.c
student.o:student.c student.h
	gcc -c student.c
