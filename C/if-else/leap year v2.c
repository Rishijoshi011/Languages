#include <stdio.h>
          int main()
    {
    	int m,b;
    	  printf("\n\t Enter a Year");
    	  scanf("%d",&m);
    	  printf("\n\t Your given year is %d",m);
    	    if(m%4==0 ) //&& m%400==0 || m%100!=0)
    	 {
    	 	printf("\n\t Your given year : %d is leap year",m);
		 }
		 else if (m%400==0)
		{  
		   // printf("\n\t Your given year is not leap year");
		   printf("\n\t Your given year : %d is not a leap year",m);
	    }
	    else if (m%100!=0)
	      {
	      	printf("\n\t Your given year : %d is a leap year",m);
		  }
		  else if(m%4==0)
		  {
		  	printf("\n\t your given year : %d is not a leap year",m);
		  }
		  else 
		      printf("\n\t your given year : %d is not a leap year",m);
	}
