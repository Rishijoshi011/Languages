#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	FILE *m;
	char b;
	m=fopen("readmode.txt","r");
	 if(m==NULL)
	   printf("\n\tFile is not exist");
     else
       printf("\n\tFile is opening\n\t");
    fputs("Hello",m);
//	fclose(m);  
     while((b=getc(m))!=EOF)
	{
     printf("%c",b);
	}
}
