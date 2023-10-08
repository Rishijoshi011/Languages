#include <stdio.h>
  int main ()
{
	int m,b;
	  printf("\n\t Enter the values ");
	   scanf("%d%d",&m,&b);
	    if(m>0)
	{
		    if(b>0)
		{
			printf("\n\t Your coordinets in first Quardent.Your given numbers are %d and %d",m,b);
		} 
		    else 
		{
			printf("\n\t Your coordinets in fourth Quardent. Your given numbers are %d and %d",m,b);
		}    
	}
	    else 
	{
		    if(b>0)
		{
			printf("\n\t Your coordinets in second Quardent. Your given numbers are %d and %d",m,b);
		}
		    else 
		{
			printf("\n\t Your coordinets in third Quardent. Your given numbers are %d and %d",m,b);
		}	  
	}    
}  
