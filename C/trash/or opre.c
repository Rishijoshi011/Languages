#include <stdio.h>
    int main ()
  {
  	int a=5,b=5,c=10,result;
  	result= (a==b) ||(c>b);
  	printf("\n(a==b) || (c>b) is%d\n",result);
  	result=(a==b) || (c<b);   
  	printf("\n(a==b) || (c<b) is%d",result);
  }
