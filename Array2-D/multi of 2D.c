#include<stdio.h>
   int main()
{
	int m[3][3],b[3][3],sum[3][3],i,j,k;
	 printf("\n Enter the elements for the first Array");
	 for(i=0;i<3;i++) // getting first array
	{
		printf("\n\t");
		  for(j=0;j<3;j++)
		{			scanf("%d",&m[i][j]);
		}
	}
	 printf("\n Your given elements if FA");
	   for(i=0;i<3;i++)  //print first
	{
		 printf("\n\t");
		 for(j=0;j<3;j++)
		{
			printf("%4d",m[i][j]);
		}
	 printf("\n");
	}
	 printf("\n Enter the elements for the second Array");
 	   for(i=0;i<3;i++) //getting second array
	{
		printf("\n\t");
		  for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	  printf("\n Your given elements if SA");
	   for(i=0;i<3;i++)  //print second
	{
		 printf("\n\t");
		 for(j=0;j<3;j++)
		{
			printf("%4d",b[i][j]);
		}
	 printf("\n");
	}
	  // Multi Array
	    for(i=0;i<3;i++)
	{
		   for(j=0;j<3;j++)
		{
		    sum[i][j]=0;
		     for(k=0;k<3;k++)
		    {
		    	 sum[i][j]+=m[i][k]*b[k][j];
			}
		}
	}
	   printf("\n");
	   // Multi of 2d array
		 printf("\n Multi of 2d Array\n\n");
	    for(i=0;i<3;i++)
	{
		   for(j=0;j<3;j++)
		{
		     printf("%6d",sum[i][j]);
  		}
  		 printf("\n\n");
	}
}  
