#include <stdio.h>
#include "store.h"


void read ( struct item list [] , int n )
{
	for ( int i = 0 ; i < n; i++)
	{
	printf ( "Enter unit price for item %d: " , i + 1 );
	scanf ( "%d" , & list [i]. unitPrice );
	printf ( "Enter quantity for item %d: " , i + 1 );
	scanf ( "%d" , & list [i]. quantity );
	list [i]. total = list [i]. unitPrice * list [i]. quantity ;
	printf ( " \n " );
	}
}


void display ( struct item list [] , int n )
{
	int totalAll = 0 ;
	for ( int i = 0 ; i < n; i++)
	{
		printf ( "Unit price for item %d: %d \n " , i + 1 ,
		list [i]. unitPrice );
		printf ( "Quantity for item %d: %d \n " , i + 1 , list [i]. quantity );
		printf ( "Total price for item %d : %d \n " , i + 1 , list [i]. total );
		totalAll += list [i]. total ;
		printf ( " \n " );
	}
	printf ( "Total quantity of all items is : %d \n " , totalAll);
}

