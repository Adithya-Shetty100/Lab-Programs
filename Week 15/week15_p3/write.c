#include <stdio.h>

int main()
{
	FILE *fp;
	char s[100],ch;int n;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	fp=fopen("file1.txt","w");
	printf("The lines are\n");
	
	for(int i=0;i<(n+1);i++)
	{
		fgets(s, sizeof(s), stdin);
		fputs(s,fp);
	}
	fclose(fp);

	printf("Read the file contents\n");
	fp=fopen("file1.txt","r");

	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		else
			printf("%c",ch);
	}
	fclose(fp);
	return 0;
}








































































































































































































































	

	
