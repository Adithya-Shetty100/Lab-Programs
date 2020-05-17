#include<stdio.h>
#include "date.h"


int main()
{
	struct date d1,d2;
	char c,c1,c2,c3;
	printf("Enter the date 1 in the format dd/mm/yyyy\n");
	scanf("%d%c%d%c%d",&d1.day,&c,&d1.month,&c1,&d1.year);
	printf("Enter the date 2 in the format dd/mm/yyyy\n");
	scanf("%d%c%d%c%d",&d2.day,&c2,&d2.month,&c3,&d2.year);
	
	int take=compare(d1,d2);
	if (take==0)
		printf("Date 1 is equal to date 2\n");
	else if (take==1)
		printf("Date 1 is greater than date 2\n");
	else
		printf("Date 1 is smaller than date 2\n");
	
}
	

	
	
