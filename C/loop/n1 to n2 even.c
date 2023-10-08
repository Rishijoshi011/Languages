#include<stdio.h>
   int main()
{
	int m,b,r;
	  printf("\n\t Enter any Number.");
	  scanf("%d",&m);
	  printf("\n\t Enter any Number.");
	  scanf("%d",&b);
	   if(m%2==0)
	{
		r=m+1;
	}
       else
	{ 
	     r=m;
	} 	
	    while(r<=b)
	  {
	  	printf("\n\t%d",r);
	  	r=r+2;
	  } 
}
