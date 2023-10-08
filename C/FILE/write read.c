#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	FILE *m;
	char b;
	m=fopen("write read.txt","w");
	 if(m==NULL)
	{
		printf("File is not created");
		return;
	}
	 while((b=getchar())!=EOF)
	{
		putc(b,m);
	}
	 fclose(m);
	 printf("\n\tYour given data");
	 m=fopen("write/read.txt","r");
	 while((b=getc(m))!=EOF)
	{
		printf("%c",b);
	}
	fclose(m);
}
