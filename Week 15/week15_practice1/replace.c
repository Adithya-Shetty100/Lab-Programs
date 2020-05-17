#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp1;
	char s[20],s1[80],str1[80],str2[80];
	char ch;int recsize;
	printf("Enter the  file name:");
	scanf("%s",s);
	fp1=fopen(s,"r+");
	
	printf("Contents of file\n");
	while(1)
	{
		ch=fgetc(fp1);
		if (ch==EOF)
		break;
		else
			printf("%c",ch);
	}
	printf("\n");
	fclose(fp1);	
	
	fp1=fopen(s,"rb+");
	printf("Enter the line you want to replace\n");
	scanf("%s",str1);
	printf("Enter the new line\n");
	scanf("%s",str2);
	rewind(fp1);
	
	while(fread(s1,recsize,1,fp1)!=0)
	{
		printf("swag");
		if(strcmp(s1,str1)==0)
		{
			fseek(fp1,-recsize,SEEK_CUR);
			fwrite(str2,recsize,1,fp1);
			break;
		}
	}

	fclose(fp1);
	fp1=fopen(s,"r+");
	
	printf("Contents of file\n");
	while(1)
	{
		ch=fgetc(fp1);
		if (ch==EOF)
		break;
		else
			printf("%c",ch);
	}
	printf("\n");	
	
	fclose(fp1);	
	
	
}

	
