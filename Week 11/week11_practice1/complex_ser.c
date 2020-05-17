#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

void operation(struct comp t1,struct comp t2)
{
	add.real=t1.real+t2.real;
	add.img=t1.img+t2.img;
	subtract.real=t1.real-t2.real;
	subtract.img=t1.img-t2.img;
	multiply.real=t1.real*t2.real;
	multiply.img=t1.img*t2.img;

	display(add,subtract,multiply);

}


void display(struct comp add,struct comp subtract,struct comp multiply)
{
	printf("Add:%d+ (%d)i\nSubtract:%d+ (%d)i\nMultiply:%d+ (%d)i\n",add.real,add.img,subtract.real,subtract.img,multiply.real,multiply.img);
}
