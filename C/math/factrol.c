      // this is a program of factorial number
#include <stdio.h>
     int main()
   { 
	   int m,fact=1,number;
       printf("Enter a number: ");
       scanf("%d",&number);
       for(m=1;m<=number;m++)
       fact=fact*m; 			
	   printf("\n\tfactorial number of %d : %d",number,fact);	       
	}