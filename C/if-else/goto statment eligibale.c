#include <stdio.h>
        int main ()
{
    	int m,b,r,j,d,p;
    	repeat:
    	printf("\n\t Enter Your marks \n\t Maths,Physics,English,Chemistry");
    	scanf("%d%d%d%d",&m,&b,&r,&d);
    	j=m+b+r+d;
    	printf("\n\t Your total marks are %d",j);
    	if ((j>=145 && m>=35 && b>=35 && r>=35 && d>=35) || j>=490 && j>=400) 
    {
    	printf("\n\tYou are Eligibale for addmision in our university");
	}
		else
	{
		printf("\n\t BETTER LUCK NEXT TIME ");
	}
	    printf("\n\tPress 0 for stop");
	    _flushall();
	    scanf("%d",&p);
	      if (p==0)
	    {
	    	printf("\n\t Thanks for using our app");
		}
		  else
		{
			goto repeat;
		}  
}
