#include <stdio.h>
   int main ()
{
	 int m,b,r,j;
	  printf("\n\t Enter the values of triangle");
	  scanf("%d%d%d",&m,&b,&r);
	   if (m+b+r==180)
	{
		printf("\n\t Tringle can be fromed. Your given values A=%d B=%d and C=%d.",m,b,r);
	}
	   else 
	{
	   	printf("\n\t Tringle can't be fromed. Your given values A=%d B=%d and C=%d.",m,b,r);
	}   
}  
