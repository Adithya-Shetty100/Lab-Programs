a.out:mark_cl.o mark_ser.o
	gcc mark_cl.o mark_ser.o
mark_cl.o:mark_cl.c mark.h
	gcc -c mark_cl.c 
mark_ser.o:mark_ser.c mark.h
	gcc -c mark_ser.c




