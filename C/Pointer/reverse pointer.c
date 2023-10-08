#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	char m[]={"Hello World"};
	char *b,*temp;
	int i,len=0;
	b=&m[0]; 
	temp=b;
	 for(;*b!='\0';b++);
	 len=b-temp;
	 printf("\n\t length:%d\n\t",len);
	 printf("\n\t Reverse of string : ");
	 for(i=len;i>0;i--)
	{
		b--;
		printf("%c",*b);
	}	 
}
