#include<stdio.h>
   int main()
{
	int i,j,m[3][3];
	 printf("\n\t Enter the elements of an array");
	  for(i=0;i<3;i++)
	{
		 for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	 for(i=0;i<3;i++)
	{
		 printf("\n\t");
		 for(j=0;j<3;j++)
		{
			printf("%4d",m[i][j]);
		}
	 printf("\n");
	}
}
