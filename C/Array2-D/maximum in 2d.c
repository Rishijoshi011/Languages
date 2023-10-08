#include<stdio.h>
   int main(){
	int m[2][2],i,l,s;
	 printf("\n\t Enter four numbers");
	  for(i=0;i<2;i++)
	{
		 for(l=0;l<2;l++)
		{
			scanf("%d",&m[i][l]);
		}
	}
	 for(i=0;i<2;i++)
	{
		 for(l=0;l<2;l++)
		{
			 if(m[i][l]>s)
			{
				s=m[i][l];
			}
		}
	}
	printf("\n\tLargest value in matrix:%2d",s);
}
