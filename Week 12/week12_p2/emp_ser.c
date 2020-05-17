#include <stdio.h>
#include <stdlib.h>
#include "emp.h"

void read(struct emp *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter emp-id:");
		scanf("%d",&(p+i)->id);
		printf("Enter name:");
		scanf("%s",(p+i)->name);
		printf("Enter department:");
		scanf("%s",(p+i)->dep);
		printf("\n");
	}
}

void display(struct emp *p,int n)
{
	printf("The employee details are:\n");
	for(int i=0;i<n;i++)
	{
		printf("Emp-id:%d \n",(p+i)->id);
		printf("name:%s \n",(p+i)->name);
		printf("department:%s \n",(p+i)->dep);
		printf("\n");
	}
}
