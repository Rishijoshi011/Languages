#include<stdio.h>
#include<conio.h>
  int arrsum(int);
  int main()
{
	system("COLOR 0B");
	int m[10];
	printf("\n\tEnter ten elements");
	arrsum(m);
}
  	int  arrsum(int m)
{
	int s[10],i,sum=0;
	 for(i=0;i<10;i++)
	{
		scanf("%d",&s[i]);
	}
	  for(i=0;i<10;i++)
	{
		sum+=s[i];
	}
	  printf("\n\n\tSum of your elements:%3d",sum);
}
