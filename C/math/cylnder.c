          // this ia a program of curved surface area of cylinder;
#include <stdio.h>
#include <math.h>
#define pie 22/7
   int main()
   {
   	float r,h,area;   // here you can use float const pie = 22/7 ;
   	printf("\n\t\t Enter the value of radius and hight");
   	scanf ("%f%f",&r,&h);
    area = 2*pie*r*h;
	printf(" Curved surface area of cylinder = %f",area);
	printf("\n\t\t\t YOUR ANSWER IS HERE");   	
   }
