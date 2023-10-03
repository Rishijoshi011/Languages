#include<stdio.h>
    int main()
{
	int m[10][10],b[10][10],sum[10][10],c,r,i,j,k;
	 printf("\n\t Enter number of Row");
	 scanf("%d",&r);
	 printf("\n\t Enter number of Column");
	 scanf("%d",&c);
	 printf("\n\t Enter elements of First Array");
	  for(i=0;i<r;i++)									   //Getting FA
	{
	 	 for(j=0;j<c;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	 printf("\n\t Enter elements of Second Array");
	  for(i=0;i<r;i++)									   //Getting SA
	{
		 for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	  for(i=0;i<r;i++)									//Process of Multi
	{	
		for(j=0;j<c;j++)
		{
			sum[i][j]=0;
			 for(k=0;k<r;k++)
			{
				sum[i][j]+=m[i][k]*b[k][j];
			}
		}														             
	}
	  for(i=0;i<r;i++)									   //print F Ans
	{
		 printf("\n");
		 for(j=0;j<c;j++)
		{
			printf("%6d ",sum[i][j]);
		}
	 	printf("\n");
	}
}
