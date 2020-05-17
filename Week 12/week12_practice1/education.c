
#include <stdio.h>
#include <stdlib.h>
#include "education.h"

int main ()
{
	int n, *ptr;
	printf ( "Enter no. of courses :" );
	scanf ( "%d" , &n);
	ptr = ( struct course *) malloc (n * sizeof ( struct course));
	read (ptr, n);
	printf ( "Enter updated no. of courses:" );
	scanf ( "%d" , &n);
	ptr = ( struct course *) realloc (ptr, n * sizeof ( struct course));
	read (ptr, n);
	display (ptr, n);
}
