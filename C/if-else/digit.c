#include <stdio.h>
  int main()
  {
  	int m;
  	printf("\n\t Enter any numbers");
  	scanf("%d",&m);
  	  if(m>=-9 && m<=9)
  	{
  		printf("\n\t Your given number is %d. it's one digit number.",m);
	  }
	  else if (m>=-99 && m<=99)
	{
		printf("\n\t Your given number is %d. It's two digit number.",m);
	}
	  else if (m>=-999 && m<=999)
	{
		printf("\n\t Your given number is %d. It's three digit numbe.",m);
	}
	else if (m>=-9999 && m<=9999)
	{
		printf("\n\t Your given number is %d. It's four digit number.",m);
	}
	  else
	{
		printf("\n\t Your given number is %d. It's more then 10000",m);
	}
  }
