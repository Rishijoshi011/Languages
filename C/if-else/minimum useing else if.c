#include <stdio.h>
    int main ()
{
	int m,b,r;
	  printf("\n\t Enter the values of m,b and r.");
	  scanf("%d%d%d",&m,&b,&r);
	  printf("\n\t Your given values are m=%d,b=%d and c=%d.",m,b,r);
	 if (m<=b && m<=r)
  {
  	  printf("\n\t %d is minimum value.That's why m is minimum",m);
  }
     else if (b<=m && b<=r)
  {
  	printf("\n\t %d is minimum value. That's why b is minimum",b);
   } 
     else 
  {
  	printf("\n\t %d is minimum value. That's why r is minimum",r);
   } 
}
