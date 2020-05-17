a.out:insert1.o insert.o
	gcc insert1.o insert.o
insert1.o:insert1.c insert.h
	gcc -c insert1.c 
insert.o:insert.c insert.h
	gcc -c insert.c


