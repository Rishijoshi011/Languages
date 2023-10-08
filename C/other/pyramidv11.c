#include<stdio.h>
    int main()
{
	 int m=0,b=0,r=1;
	   for(m=1;m<=5;m+=2)
	{
		  for(b=5;b>=1;b--)
		{   
		      if(b>m)  
		    {
			   printf(" ");
		    }
			  else 
			{
				printf("%d",r++);
			}  		    
        }
        printf("\n");
	}
}
