#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	 int m[10],i,size;
	 int *b,*l;
	 b=&m[0];
	 printf("\n\tEnter size of Array within 10");
	 scanf("%d",&size);
	 printf("\n\tEnter values");
	  for(i=0;i<size;i++)
	{
		scanf("%d",&m[i]);
	}
	 printf("\n\tYour given values: ");
	  for(i=0;i<size;i++)
	{
		printf("%3d",*b);
		b++;
	}
}
