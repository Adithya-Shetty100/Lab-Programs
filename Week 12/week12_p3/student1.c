#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void read(struct std *p,int n)
{

	for(int i=0;i<n;i++)
	{
		printf("Enter data for record #%d\n", (i+1));
		printf("Enter roll no:");
		scanf("%d",&(p+i)->id);
		printf("Enter name:");
		scanf("%s",(p+i)->name);
		printf("Enter marks:");
		scanf("%d",&(p+i)->mark);
		printf("\n");
	}
}

void display(struct std *p,int n)
{
	printf("Before sorting:\n");
	printf("%-10s %-8s %-8s\n","Roll no.","Name","Marks");
	for(int i=0;i<n;i++)
	{
		printf("%-10d %-10s %-10d \n",(p+i)->id,(p+i)->name,(p+i)->mark);
		
	}
}

void sort(struct std *p,int n)
{
	struct std t;
	for(int i=1;i<n;i++)
	{
		for(int j=(i-1);j>=0;j--)
		{
			if((p+j)->mark < (p+j+1)->mark)
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}

	printf("After sorting:\n");
	printf("%-10s %-8s %-8s\n","Roll no.","Name","Marks");
	for(int i=0;i<n;i++)
	{
		printf("%-10d %-10s %-10d \n",(p+i)->id,(p+i)->name,(p+i)->mark);
		
	}
}
