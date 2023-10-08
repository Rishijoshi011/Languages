#include <stdio.h>
   int main()
{
	int m,b,r; 
	 printf("\n\t Enter any Three values");
	 scanf("%d%d%d",&m,&b,&r);
	  if (m>b)
	{
		 if(m>r)
		{
			 printf("\n\t m is maximum. m=%d",m);
		} 
	     else
		{
			 printf("\n\t r is maximun. r=%d",r);
		}
    }
	  else 
	{
		  if (b>r)
	    {
	    	printf("\n\t b is maximum. b=%d",b);
		}	
          else
		{
			printf("\n\t r is maximum. r=%d",r);
		}  		
	}
	  
}
