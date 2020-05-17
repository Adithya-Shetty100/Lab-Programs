#include<stdio.h>
#include "distance.h"


void addition(struct length l[])
{	
	l[2].inch = ( l[0].inch + l[1].inch ) % 12 ;
	l[2].feet = (( l[0]. inch + l[1].inch ) / 12 ) + l[0].feet + l[1].feet;
	printf ( "The feet and inch is %d feet and %d inch \n " , l[2].feet ,
	l[2].inch );
}
