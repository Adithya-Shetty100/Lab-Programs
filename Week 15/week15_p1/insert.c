#include <stdio.h>
#include "insert.h"

int main()
{
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	read(&a[0],n);
	return 0;
}
