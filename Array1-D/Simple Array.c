#include<stdio.h>
   int main()
{
	int m[10],i;
	 printf("\n\t Enter any ten Numbers");
	  for(i=0;i<10;i++)
	{
		scanf("%d",&m[i]);
	}
	 printf("\n Your given elements are: ");
	  for(i=0;i<10;i++)
	{
		printf("\n m[%d] is m[%d].",i,m[i]);
	}
}
