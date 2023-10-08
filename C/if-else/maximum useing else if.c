#include <stdio.h>
    int main ()
{
	int m,b,r;
	  printf("\n\t Enter the values of m,b and r.");
	  scanf("%d%d%d",&m,&b,&r);
	 if (m>=b && m>=r)
  {
  	  printf("\n\t %d is maximum value. That's why m is maximum",m);
  }
     else if (b>=m && b>=r)
  {
  	printf("\n\t %d is maximum value. That's why b is maximum",b);
   } 
     else 
  {
  	printf("\n\t %d is maximum value. That's why r is maximum",r);
   } 
}
