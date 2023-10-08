#include <stdio.h>
  int main()
  {
  	int m,b;
  	printf("\n\t Enter any two number");
  	scanf("%d%d",&m,&b);
  	  if(m>0 && b>0)
  	{
  		printf("\n\t Coordinets is in first quardent. Your given numbers are %d and %d",m,b);
	  }
	  else if (m<0 && b>0 )
	{
		printf("\n\t Coordinets is in second quardent. Your given numbers are %d and %d",m,b);
	}
	  else if (m<0 && b<0)
	{
		printf("\n\t Coordinets is in third quardent. Your given numbers are %d and %d",m,b);
	}
	  else
	{
		printf("\n\t Coordinets is in forth quardent. Your given numbers are %d and %d",m,b);
	}
  }
