#include <stdio.h>
      int main()
{
	int m;
	char b;
	repeat:
	printf("\n\t Enter any Number");
	scanf("%d",&m);
	    if(m%2==0)
	{
		printf("\n\t Your given number %d is Even",m);
	}
	    else 
	{
		printf("\n\t Your given number %d is Odd",m);
	}
	 printf("\n\n\t If you want to continue press Y.");
	 _flushall();	
	 scanf("%c",&b);
	 _flushall();
	  if(b=='Y'||b=='y')
	{
		goto repeat;
	}
	  else 
	{
		printf("\n\n\t Thanks for the using our app.");
	}   
}
