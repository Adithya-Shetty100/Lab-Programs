#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	char s[20],s1[20],s2[20];
	char ch;
	printf("Enter the first file name:");
	scanf("%s",s);
	printf("Enter the second file name:");
	scanf("%s",s1);
	fp1=fopen(s,"r");
	fp2=fopen(s1,"r");
	printf("Contents of first file\n");
	while(1)
	{
		ch=fgetc(fp1);
		if (ch==EOF)
		break;
		else
			printf("%c",ch);
	}
	printf("\n");

	printf("Contents of second file\n");
	while(1)
	{
		ch=fgetc(fp2);
		if (ch==EOF)
			break;
		else
			printf("%c",ch);
	}
	printf("\n");

	printf("Enter the new file to merge two files: ");
	scanf("%s",s2);
	fp3=fopen(s2,"w");
	if(fp3==NULL)
	{
		printf("Cant write");
		exit(1);		
	}


	while(1)
	{
		ch=fgetc(fp1);
		if (ch==EOF)
		break;
		else
			fputc(ch,fp3);
		
	}
	fputc('\n',fp3);
	while(1)
	{
		ch=fgetc(fp2);
		if (ch==EOF)
		break;
		else
			fputc(ch,fp3);
		
	}
	
	
	
	fclose(fp3);
	fclose(fp1);
	fclose(fp2);

	fp3=fopen(s2,"r");
	if(fp3==NULL)
	{
		printf("Cant read");
		exit(2);		
	}
	printf("The file has been successfully merged\n");
	
	while(1)
	{
		ch=fgetc(fp3);
		if (ch==EOF)
			break;
		else
			printf("%c",ch);
	}
	printf("\n");
	fclose(fp3);
	return 0;


}


