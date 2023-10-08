#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	 void *s;
	 int i,m[5]={11,12,13,14,15};
	 float b[5]={11.11,12.12,13.13,14.14,15.15};
	 s=&m[0];
	 printf("\n int values:");
	  for(i=0;i<5;i++)
	{
		printf("%5d",*(int *)s);
		s=(int *)s+1;
	}
	 s=&b[0];
	 printf("\n float values:");
	  for(i=0;i<5;i++)
	{
		printf("%5f ",*(float *)s);
		s=(float *)s+1;
	}
}
