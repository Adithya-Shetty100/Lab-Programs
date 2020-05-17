a.out:date1.o date.o
	gcc date1.o date.o
date1.o:date1.c date.h
	gcc -c date1.c
date.o:date.c date.h
	gcc -c date.c
