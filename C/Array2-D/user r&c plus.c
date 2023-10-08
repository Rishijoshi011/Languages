#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	 int m[10][10],b[10][10],sum[10][10],i,j,r,c,ans;
	  printf("\n\t Enter number of Row");
	  scanf("%d",&r);
	  printf("\n\t Enter number of Column");
	  scanf("%d",&c);
	  printf("\n\t Enter Elements of FA");
	   for(i=0;i<r;i++)                           //Getting FA
	{
		 for(j=0;j<c;j++)
		{
			scanf("%4d",&m[i][j]);
		}
	}
	 printf("\n Your given Elements of FA\n");
	   for(i=0;i<r;i++)							 //print FA
	{
		  for(j=0;j<c;j++)
		{
			printf("%6d",m[i][j]);
		}
		 printf("\n");
	}
	 printf("\n\t Enter Elements of SA");
	   for(i=0;i<r;i++)							//Getting SA
	{
		 for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]); 
		}
	}
 	  printf("\n Your given Elements of SA\n");
	   for(i=0;i<r;i++)							 //print SA
	{
		  for(j=0;j<c;j++)
		{
			printf("%6d",b[i][j]);
		}
		 printf("\n");
	}   
	  for(i=0;i<r;i++)							// process of plus
	{
		 for(j=0;j<c;j++)
		{
			sum[i][j]=m[i][j]+b[i][j];
		}	
	}
	 printf("\n Type 1 for see process; Type 2 for No");
	 scanf("%d",&ans);
	  switch(ans)
	{	
	 case 1:
	 printf("\nHere is your process\n");
	 	 for(i=0;i<r;i++)
		{
	  	  printf("\t\t\n");
	     	 for(j=0;j<c;j++)
			{
		    	printf("%d + %d\t",m[i][j],b[i][j]);
  			}
  		printf("\n\n");
		}
		 break;
	 default: printf("\n");break;	
	}
	printf("\nYour final ans:\n");
	 for(i=0;i<r;i++)
	{
	  	printf("\t");
	     	 for(j=0;j<c;j++)
			{
		    	printf("%5d",sum[i][j]);
  			}
  		printf("\n\n");
	}
}
