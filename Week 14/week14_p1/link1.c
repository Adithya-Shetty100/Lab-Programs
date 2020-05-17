#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
NODE *head = NULL ;
void insertBeg ( int val )
{
	NODE *temp = (NODE *) malloc ( sizeof (NODE));
	temp -> data = val;
	temp -> next = head;
	head = temp;
}


void insertEnd ( int val )
{
	NODE *temp = (NODE *) malloc ( sizeof (NODE));
	temp -> data = val;
	temp -> next = NULL ;
	if (head == NULL )
		{ 
		head = temp;
	}
	else
	{
		NODE *move = head;
		while ( move -> next != NULL )
		{
			move = move -> next ;
		}

		move -> next = temp;
	}
}


void display ()
{
	NODE *move = head;
	while ((move) != NULL )
	{
		printf ( "%-6d" , move -> data );
		move = move -> next ;
	}
	printf ( "NULL \n " );
}

void sumAlt ()
{
	int sum = 0 ;
	NODE *move = head;
	int count = 1 ;
	while (move != NULL )
	{
		if (count % 2 != 0 )
		{
			sum += move -> data ;
		}
		move = move -> next ;
		count++;
	}
	printf ( " \n Sum of Alternate elements is: %d \n " , sum);
}

void sumAll ()
{
	int sum = 0 ;
	NODE *move = head;
	int count = 1 ;

	while (move != NULL )
	{
		sum += move -> data ;
		move = move -> next ;
		count++;
	}
	printf ( " \n Sum of All elements is: %d \n " , sum);
}

void sumEO ()
{
	int sumOdd = 0 ;
	int sumEven = 0 ;
	NODE *move = head;
	int count = 1 ;
	while (move != NULL )
	{
		if (count % 2 != 0 )
		{
			sumOdd += move -> data ;
		}
		else
		{
			sumEven += move -> data ;
		}
		move = move -> next ;
		count++;
	}
	printf ( "\n Sum of odd elements is: %d \n" , sumOdd);
	printf ( "\n Sum of even elements is: %d \n" , sumEven);
}

int main ()
{
	int n;
	printf ( "Enter size on initial linked list:" );
	scanf ( "%d" , &n);
	int val;

	for ( int i = 0 ; i < n; i++)
	{
		printf ( "Enter element :" );
		scanf ( "%d" , &val);
		insertEnd (val);
	}
	printf ( "The linked list is : " );
	display ();
	printf ( " \n " );
	int choice = 0 ;
	printf ( "1.Display\n2.Insert in beginning\n3.Insert at the end\n4.Sum of Alternate nodes\n5.Sum of all Elements\n6.Sum of even and odd elements\n7.EXIT\n" );
	while (choice != 7 )
	{
		printf ( "\nEnter choice:" );
		scanf ( "%d" , &choice);
		switch (choice)
		{
			case 1 :
			display ();
			break ;
			case 2 :
			printf ( "\nEnter element :" );
			scanf ( "%d" , & val );
			insertBeg (val);
			break ;
			case 3 :
			printf ( "\nEnter element :" );
			scanf ( "%d" , & val );
			insertEnd (val);
			break ;
			case 4 :
			sumAlt ();
			break ;
			case 5 :
			sumAll ();

			break ;
			case 6 :
			sumEO ();
			break ;
			case 7 :
			choice = 7 ;
			break ;
			default :
			printf ( "Wrong Choice \n" );
		}
	}
}
