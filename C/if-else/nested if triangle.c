#include <stdio.h>
   int main()
{
	 int m,b,r;
	  printf("\n\t Enter the values of triangle");
	  scanf("%d%d%d",&m,&b,&r);
	   if (m==b)
	{
		  if(b==r)
		{
			printf("\n\t Your triangle is Equilateral triangle");
		}
		  else
		{
			printf("\n\t Your tringle is Isosceles triangle");
	    }  
	} 
	      else 
	{
	    	if(b==r || m==r)
	    {
	    	printf("\n\t Your tringle is Isosceles triangle");
		}
		  else 
		
		{
			printf("\n\t Your triangle is Scalene tringle");
		}  	
	}
}
