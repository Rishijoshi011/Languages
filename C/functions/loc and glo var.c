#include<stdio.h>
#include<conio.h>
int m=6,b=5;  //global variable 
   int main()
{
	system("COLOR 0B"); 
	int m2=10,b2=-3;  	//local variable
	printf("\n\tGlobal Variable :%2d",m+b);;
	printf("\n\tLocal Variable  :%2d",m2+b2);
}
