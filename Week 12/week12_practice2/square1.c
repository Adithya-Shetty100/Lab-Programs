#include <stdio.h>

void read(int *p,int n)
{
	printf("Enter the elements");
	for (int i=0;i<n;i++)
		scanf("%d",&*(p+i));
}

void display(int *p, int n)
{
	printf("Updated array:");
	for(int i=0;i<n;i++)
	{
		p[i]*=p[i];
		printf("%d \n",*(p+i));
	}
}
