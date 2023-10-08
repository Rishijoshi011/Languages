#include<stdio.h>
#include<conio.h>
char rev(void);
  int main()
{
	system("COLOR 0B");
	rev();
}
	char rev(void)
{
	char m[5],b[5];
	int i,j,len=0;
	printf("\n\tEnter Your name");
	gets(m);
	 for(i=0;m[i]!='\0';i++) 
	{
		len++;
	}
	printf("\n\tlenth of String%3d\n\t",len);
	j=len-1;
	 for(i=0;i<len;i++)
	{
	   	b[i]=m[j];
	   	j--;
	}	
	printf("\n\tYour reverse string:  %s",b);
}
