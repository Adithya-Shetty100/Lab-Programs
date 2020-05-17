#include<stdio.h>
#include "distance.h"

int main ()
{

	printf ( "Enter feet and inches for distance1:\n" );
	printf ( "Enter feet:" );
	scanf ( "%d", & l[0] . feet );
	printf ( "Enter inches :" );
	scanf ( "%d", & l[0] . inch );
	printf ( "\n" );
	printf ( "Enter feet and inches for distance2:\n" );
	printf ( "Enter feet:" );
	scanf ( "%d", & l[1].feet );
	printf ( "Enter inches :" );
	scanf ( "%d" , &l[1].inch );
	addition(l);
	
}
