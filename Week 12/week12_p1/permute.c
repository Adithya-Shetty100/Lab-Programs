#include <stdio.h>
#include <stdlib.h>
#include "permute.h"

int main()
{
	int n, *ptr;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	per(ptr,n);
	display(ptr,n);
	free(ptr);
	return 0;
}


