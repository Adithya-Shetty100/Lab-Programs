a.out:complex_ser.o complex_cl.o
	gcc complex_ser.o complex_cl.o
complex_ser.o:complex_ser.c complex.h
	gcc -c complex_ser.c
complex_cl.o:complex_cl.c complex.h
	gcc -c complex_cl.c
