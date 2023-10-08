#include<stdio.h>
   int main()
{
	int n,m,b=1;
	 printf("Enter any Number");
	 scanf("%d",&n);
	  for(m=1;m<=n;m++)
	{
		 if(m%2==0)
		{
			printf("%d+",b);
		}
		 else 
		{
			printf("%d-",b);
		}
		 b++;
	}
}
