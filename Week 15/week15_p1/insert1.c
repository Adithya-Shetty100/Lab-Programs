#include <stdio.h>
#include "insert.h"

void read(int a[], int n)
{
	printf("Enter the elements:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(&a[0],n);
}

void sort(int a[],int n)
{
	 for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while (key < a[j] && j >= 0)
		{
			// For descending order, change key<a[j] to key>a[j].
			a[j + 1] = a[j];
			 j--;
		}
		 a[j + 1] = key;
	}
	
			
	display(&a[0],n);
}

void display(int a[],int n)
{
	printf("The elements are:\n");
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
}
