#include<stdio.h>
#include<conio.h>
 
 int main()
{
	int *b, m = 11;
	b = &m;

	// to print Address u specifier will be used

	printf("Address of m is: %u \n", b);
	printf("Value of m is: %d \n", *b);

	*b = 7;
	printf("New value of m is: %d \n", *b);

	return 0;		
}