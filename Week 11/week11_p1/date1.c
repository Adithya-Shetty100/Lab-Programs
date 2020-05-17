#include<stdio.h>

#include "date.h"
int compare(struct date d1,struct date d2)
{
	if(d1.day==d2.day && d1.month==d2.month && d1.year==d2.year)
		return 0;
	else if ((d1.year>d2.year)||(d1.year==d2.year && d1.month>d2.month)||(d1.year==d2.year && d1.month==d2.month && d1.day>d2.day))
		return 1;
	else
		return -1;
}

