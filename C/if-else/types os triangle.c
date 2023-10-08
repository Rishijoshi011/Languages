#include <stdio.h>
     int main ()
{
	int m,b,r;
	  printf("\n\t Enter the values of Triangle.");
	  scanf("%d%d%d",&m,&b,&r);
	   if(m==b && b==r && m==r)
	{
		printf("\n\t Tringle is Equilateral triangle. \n\tA=%d,B=%d and C=%d are valaues of Equilateral triangle",m,b,r);
	}
	   else if (m==b || b==r || m==r)
	{
		 printf("\n\t Tringle is Isosceles triangle. \n\tA=%d,B=%d and c=%d are valaues of Isosceles triangle",m,b,r);
	}
	   else 
	{   
	     printf("\n\t Triangle is Scalene triangle. \n\tA=%d,B=%d and c=%d are valaues of Scalene triangle",m,b,r);
    }
}
