#include <stdio.h>
     int main ()
{
	int a=5,b=5,c=10,result;
	result= a!=b || b>c;
	printf("\ta!=b || b>c is %d\n",result);
	result= a!=b || b<c;
	printf("\ta!=b || b<c is %d\n",result);
}
