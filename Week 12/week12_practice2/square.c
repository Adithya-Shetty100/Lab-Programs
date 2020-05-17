#include <stdio.h>
#include <stdlib.h>
#include "square.h"

int main()
{
	int n,*ptr;
	printf("Enter the number of elements");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	read(ptr,n);
	display(ptr,n);
	free(ptr);
	return 0;
}
	


