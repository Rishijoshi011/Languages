#include<stdio.h>
   int main()
{
	int m,b,r;
	 for(m=1;m<=5;m++)
	{
		 for(b=5;b>=m;b--)
		{
			printf("  ");
		}
		 for(r=1;r<=m;r++)
		{
			printf ("%d ",m);
		} 
		 printf("\n\n");
	}
}
