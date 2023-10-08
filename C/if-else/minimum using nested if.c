            // minimum number using nested if
#include <stdio.h>
   int main()
{
	int m,b,r; 
	 printf("\n\t Enter any Three values");
	 scanf("%d%d%d",&m,&b,&r);
	  if (m<b) 
	{
		 if(m<r)
		{
			 printf("\n\t m is minimum. m=%d",m);
		} 
	     else
		{
			 printf("\n\t r is minimun. r=%d",r);
		}
    }
	  else   
	{ 
		  if (b<r)
	    {
	    	printf("\n\t b is minimum. b=%d",b);
		}	
          else
		{
			printf("\n\t r is minimum. r=%d",r);
		}  		
	}
	  
}
