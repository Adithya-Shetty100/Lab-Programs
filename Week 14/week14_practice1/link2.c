#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
NODE *head = NULL ;

void display ()
{
	NODE *move = head;
	while (move != NULL )
	{
		printf ( "%-6d" , move -> data );
		move = move -> next ;
	}
	printf ( "NULL \n " );
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

void delFront ()
{
	NODE *temp = head;
	head = head -> next ;
	free (temp);
}


void delEnd ()
{
	NODE *move = head;
	if (head == NULL )
	{
		printf ( "List is empty \n " );
	}
	if ( head -> next == NULL )
	{
		move = head;
		head = NULL ;
		free (move);
	}
	else
	{
		NODE *prev;
		move = head;
		while ( move -> next != NULL )
		{
			prev = move;
			move = move -> next ;
		}
		prev -> next = NULL ;
		free (move);
	}

}
void search ( int search )
{
	NODE *move = head;
	int count = 0 ;
	int flag = 0 ;
	while (move != NULL )
	{
		if ( move -> data == search)
		{
			printf ( " \n element found at index - %d" , count);
			flag = 1 ;
		}
		move = move -> next ;
		count++;
		}
		if (flag == 0 )
		{
			printf ( "Element not found" );
		}
}

void prod ( int n )
{
	NODE *move = head;
	int prod = 1 ;
	while (move != NULL )
	{
		if ( move -> data % n == 0 )
		{
			prod *= move -> data ;
		}
		move = move -> next ;
		}
	printf ( " \n The product of elements divisible by %d is = %d" , n, prod);
}

int main ()
{
	int n;
	printf ( " \n\n Enter size on initial linked list:" );
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
	printf ( "1.Display \n2.Delete at front \n3.Delete at end \n4.Search element \n5.Product of nodes divisible by given number \n6.EXIT \n" );
	while (choice != 6 )
	{
		printf ( " \nEnter choice:" );
		scanf ( "%d" , &choice);
		int s = 0 ;
		switch (choice)
		{
			case 1 :
			display ();
			break ;
			case 2 :
			delFront ();
			break ;
			case 3 :
			delEnd ();
			break ;
			case 4 :
			printf ( "\nEnter element to search:" );
			scanf ( "%d" , & s );
			search (s);
			break ;
			case 5 :
			printf ( "\nEnter element to check divisiblity of nodes:" );
			scanf ( "%d" , & s );
			prod (s);
			break ;
			case 6 :
			choice = 6 ;
			break ;
			default :
			printf ( "Wrong Choice \n " );
		}
	}
}
