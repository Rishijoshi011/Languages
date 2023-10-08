#include<stdio.h>
      int main ()
    {
    	float p,r,n,ans;
    	printf("\nEnter Amout \nEnter rate of interest \n Enter number of year");
    	scanf("%f%f%f", &p,&r,&n);
    	ans = p*r*n/100;
    	printf("\n\t Interest: %f. ",ans);
	}	
