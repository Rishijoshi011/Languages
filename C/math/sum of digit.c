#include<stdio.h>
   int main()
{
	int m,b,r;
	 printf("\n\t Enter any Number");
	 scanf("%d",&m);
	  if (m>0)
	{  
	      while(m<0)
        {
    	  b=m%10;
    	  r=b+m;
    	  b=m/10;
    	  printf("\n\t %d",r);
 	    }
 	    printf("Enter valid number");
    }
}
