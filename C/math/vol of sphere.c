#include <stdio.h>
#include <math.h>  // or you can use #define 3.14
     int main ()
     {
     	 int r ;
     	 float vol ;
     	 float const pie = 3.14;
     	 printf("\n\tEnter the value of radious:");
     	 scanf("%d ",&r);
     	 vol=4.00/3*pie*pow (r,3);
     	 printf("\n\tVol of sphere =%f.",vol);	
     }			
