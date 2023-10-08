#include<stdio.h>
   int main()
{
	int m,b,r=1;
	 for(m=1;m<=4;m++)
	{
		 printf("\n");
		     for(b=1;b<=m;b++)
		    {
		    	 printf("%1d",r);
				 r=r+2;
            }
	}
}
