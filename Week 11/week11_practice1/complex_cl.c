#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

int main()
{
	printf("Enter a and b where a + ib is the first complex number.\n");
	scanf("%d%d",&t1.real,&t1.img);
	printf("Enter a and b where a + ib is the second complex number.\n");
	scanf("%d%d",&t2.real,&t2.img);
	operation(t1,t2);
	return 0;
}
	
