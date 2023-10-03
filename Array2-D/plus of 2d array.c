#include<stdio.h>
   int main()
{
	int m[2][2],b[2][2],sum[2][2],i,j;
	 printf("\n Enter the elements for the first Array");
	 for(i=0;i<2;i++) // getting first array
	{
		printf("\n\t");
		  for(j=0;j<2;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	 printf("\n Your given elements if FA");
	   for(i=0;i<2;i++)  //print first
	{
		 printf("\n\t");
		 for(j=0;j<2;j++)
		{
			printf("%4d",m[i][j]);
		}
	 printf("\n");
	}
	 printf("\n Enter the elements for the second Array");
 	   for(i=0;i<2;i++) //getting second array
	{
		printf("\n\t");
		  for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	  printf("\n Your given elements if SA");
	   for(i=0;i<2;i++)  //print second
	{
		 printf("\n\t");
		 for(j=0;j<2;j++)
		{
			printf("%4d",b[i][j]);
		}
	 printf("\n");
	}
	  // plus Array
	    for(i=0;i<2;i++)
	{
		   for(j=0;j<2;j++)
		{
		    sum[i][j]=m[i][j]+b[i][j];
		}
	}
	   printf("\n");
	    printf(" .............................\n\n");
	   for(i=0;i<2;i++)
	{
		 printf("\t");
		   for(j=0;j<2;j++)
		{
		     printf("%d + %d\t",m[i][j],b[i][j]);
  		}
  		 printf("\n\n");
	}
	   // addition of 2d array
		 printf("\n Addition  of 2d Array\n\n");
	    for(i=0;i<2;i++)
	{
		   for(j=0;j<2;j++)
		{
		     printf("%6d",sum[i][j]);
  		}
  		 printf("\n\n");
	}
}  
