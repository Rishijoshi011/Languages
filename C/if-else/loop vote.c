#include <stdio.h>
     int main()
{
   	 int m;
   	 repeat:
   	 printf("\n\t Enter your age");
   	 scanf("%d",&m);
   	    if (m>=18)
   	{
   	    printf("\n\t You can vote");
	}
 		else if(m!=0)
	{
		printf("\n\tYou are underage that's why you can't vote");
	}
		if(m!=0) 
	{
		goto repeat;
	}	 
}
