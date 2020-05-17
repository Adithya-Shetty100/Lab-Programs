a.out:emp_ser.o emp_cl.o
	gcc emp_ser.o emp_cl.o
emp_ser.o:emp_ser.c emp.h
	gcc -c emp_ser.c
emp_cl.o:emp_cl.c emp.h
	gcc -c emp_cl.c


