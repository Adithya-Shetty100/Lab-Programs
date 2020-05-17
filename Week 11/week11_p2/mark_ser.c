#include<stdio.h>
#include "mark.h"
#include <string.h>


void read(struct score ptr[],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("Enter student SRN:");
		scanf("%d\n",&ptr[i].roll);
		printf("Enter marks in physics:");
		scanf("%d\n",&ptr[i].phy);
		printf("Enter marks in math:");
		scanf("%d\n",&ptr[i].math);
		printf("Enter marks in electronics:");
		scanf("%d\n",&ptr[i].ec);
		printf("Enter marks in C programming:");
		scanf("%d\n",&ptr[i].comp);
		printf("Enter marks in mech:");
		scanf("%d\n",&ptr[i].mech);
		printf("Enter student name:");
		scanf("%s\n",ptr[i].name);
		
		ptr[i].total=(ptr[i].phy+ptr[i].math+ ptr[i].ec +ptr[i].comp+ ptr[i].mech);
		ptr[i].avg=ptr[i].total/5;
		
		if (ptr[i].phy>= 40 || ptr[i].math>= 40 || ptr[i].ec >= 40|| ptr[i].comp>= 40 || ptr[i].mech>= 40)
		{
			strcpy(ptr[i].result,"pass");
			if (ptr[i].avg>84 && ptr[i].avg<=100)
				strcpy(ptr[i].div,"FIRST CLASS with Distinction");
			else if (ptr[i].avg>=60 && ptr[i].avg<=84)
				strcpy(ptr[i].div,"FIRST CLASS");
			else if(ptr[i].avg>=50 && ptr[i].avg<=59)
				strcpy(ptr[i].div,"Second CLASS");
			else if(ptr[i].avg>=40 && ptr[i].avg<=49)
				strcpy(ptr[i].div,"THIRD CLASS");
		}
		
		else
		{
			strcpy(ptr[i].result,"fail");
			strcpy(ptr[i].div,"F grade");
		}
		
	}

	
}

void display(struct score ptr[] ,int n)
{
	printf("STUDENT DETAILS\n ---------------------------\n\n");
	for (int i=0;i<n;i++)
	{
		printf("Student SRN:%d\n",ptr[i].roll);
		printf("student name:%s\n",ptr[i].name);
		printf("marks in physics:%d\n",ptr[i].phy);
		printf("marks in math:%d\n",ptr[i].math);
		printf("marks in electronics:%d\n",ptr[i].ec);
		printf("marks in C programming:%d\n",ptr[i].comp);
		printf("marks in mech:%d\n",ptr[i].mech);
		printf("Total: %lf\n",ptr[i].total);
		printf("Average : %lf\n",ptr[i].avg);
		printf("Result: %s\n", ptr[i].result);
		printf("Division: %s\n\n",ptr[i].div);
		
	}
}







