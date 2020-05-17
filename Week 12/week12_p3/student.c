#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main()
{
	struct std *ptr;
	int n;
	printf("Enter the number of student records:");
	scanf("%d", &n);
	ptr=(struct std*)malloc(n*sizeof(struct std));
	read(ptr,n);
	display(ptr,n);
	sort(ptr,n);
	free(ptr);
	return 0;
}
