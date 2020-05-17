#include <stdio.h>
#include <stdlib.h>

void per(int *ptr,int n)
{
	printf("Enter the elements:\n");
	for (int i=0;i<n;i++)
		scanf("%d",(ptr+i));
	int k=*(ptr+0);
	for(int i=0;i<(n-1);i++)
		*(ptr+i)=*(ptr+i+1);
	*(ptr+n-1)=k;
	
	
}

void display(int *ptr,int n)
{
	printf("Cyclically Permute\n");
	for(int i=0;i<n;i++)
		printf("%d\n",*(ptr+i));
}



