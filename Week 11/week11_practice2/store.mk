a.out:store1.o store.o
	gcc store1.o store.o
store1.o:store1.c store.h
	gcc -c store1.c
store.o:store.c store.h
	gcc -c store.c
