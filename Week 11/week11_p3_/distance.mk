a.out:distance1.o distance.o
	gcc distance.o distance.o
distance1.o:distance1.c distance.h
	gcc -c distance1.c
distance.o:distance.c distance.h
	gcc -c distance.c
