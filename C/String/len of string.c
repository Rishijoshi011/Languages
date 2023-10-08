#include<stdio.h>
#include<conio.h>
int len(void);
  int main()
{
	system("COLOR 0B");
	rev();
}
	int rev(void)
{
	char m[11];
	int i,len=0;
	printf("\n\tEnter Your name");
	gets(m);
	 for(i=0;m[i]!='\0';i++) 
	{
		len++;
	}
	printf("\n\tlenth of String:%3d\n\t",len);
}
