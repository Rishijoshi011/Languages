#include<stdio.h>
   int main()
{
	 int m[5],b[3],mer[8],i,j;
	 printf("\n\t Enter the elements of First Array");
	  for(i=0;i<5;i++)
	{
		scanf("%d",&m[i]);
	}
	 printf("\n\t Enter the elements of second Array");
	  for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	 for(i=0;i<5;i++)
	{
		 mer[i]=m[i];
	}
	 for(i=5,j=0;i<8;i++)
	{
		mer[i]=b[j];
		j++;
	}
	 printf("\n\t Your merged elements are:");
	  for(i=0;i<8;i++)
	{
		printf("\n\t m[%d] is m[%d]",i,mer[i]);
	}
} 		
