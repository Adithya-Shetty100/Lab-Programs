#include <stdio.h>
#include <stdlib.h>
#include "emp.h"

int main()
{
	struct emp *ptr;
	int n;
	printf("Enter the number of employees:");
	scanf("%d", &n);
	ptr=(struct emp*)malloc(n*sizeof(struct emp));
	read(ptr,n);
	display(ptr,n);
	free(ptr);
	return 0;
}
