      // this is a program of discount
#include <stdio.h>
    int main ()
 {
 	int m,b,r,j;
 	float d;
 	printf("\n\tEnter the value of your bought things");
 	 scanf("%d%d%d",&m,&b,&r);
 	  j=m+b+r;
 	  printf("\n\ttotal amount is %d",j);
 	   if (j>5000)
 	    {
 	    	  d=j*75/100;
 	    	  printf("\n\tYou have to pay %.3f (Discount is 10 per.)",d);
		 }
		 else 
		 {
		 	printf("\n\tYou have to pay %d",j);
		 }
 }
