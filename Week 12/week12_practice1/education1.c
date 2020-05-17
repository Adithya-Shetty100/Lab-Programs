#include <stdio.h>
#include "education.h"


void read ( struct course * ptr , int n )
{
	printf ( "Enter for %d courses - \n" , n);
	for ( int i = 0 ; i < n; i++)
	{
		printf ( "Enter course code: " );
		scanf ( "%d" , &(ptr + i)-> code );

		printf ( "Enter course Name :" );
		scanf ( "%s" , (ptr + i)-> name );
		printf ( " \n " );
	}
}


void display ( struct course * ptr , int n )
{
	printf ( "Courses for this semester-%d\n " , n);
	printf ( "Course code \t Course name \n " );
	for ( int i = 0 ; i < n; i++)
	{
		printf ( "%d \t\t\t " , (ptr + i)-> code );
		printf ( "%s \t\t\t " , (ptr + i)-> name );
		printf ( " \n " );
	}
}
