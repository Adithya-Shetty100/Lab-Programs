#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
	char s1[20],s2[20];
	printf("Enter the  first file name:");
	scanf("%s",s1);
	printf("Enter the  second file name:");
	scanf("%s",s2);
	FILE *fp1 = fopen ( s1 , "r" );
	FILE *fp2 = fopen ( s2 , "r" );
	char ch1 = getc (fp1);
	char ch2 = getc (fp2);
	int diff = 0 , pos = 0 , line = 1 ;
	while ((ch1 != EOF) && (ch2 != EOF))
	{
		pos++;
		if (ch1 == '\n' && ch2 == '\n' )
		{
			line++;
			pos = 0 ;
		}
		if (ch1 != ch2)
		{
			diff++;
			printf ( "Line Number : %d \t Difference"

			" Position : %d \n " ,
			line, pos);
		}
		ch1 = getc (fp1);
		ch2 = getc (fp2);
	}
	printf ( "Total Differences : %d \n " , diff);
	fclose (fp1);
	fclose (fp2);
}

