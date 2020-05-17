a.out:permute1.o permute.o
	gcc permute1.o permute.o
permute1.o:permute1.c permute.h
	gcc -c permute1.c
permute.o:permute.c permute.h
	gcc -c permute.c
