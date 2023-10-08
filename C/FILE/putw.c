#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	int i,b;
	FILE *m;
	m=fopen("f3.txt","w");
	 for(i=0;i<10;i++)
	{
		putw(i,m);
	}
	
}
