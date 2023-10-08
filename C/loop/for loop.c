#include <stdio.h>
   int main()
{
     int m;	
	 double b,r=0.0;
	 for(m=0;m<=5;m++)
	{
		printf("\n\t Enter any Number");
		scanf("%if",&b);
		 if(b<=0.0)
	{
		break;
	}	 
	   r=r+b;
	} 
	  printf("\n\t %i",r);
}
