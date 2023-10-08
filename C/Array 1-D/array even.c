#include <stdio.h>
    int main ()
{
	int m[5],b=0;
	 printf("\n\t Enter any Five Number");
	   for(b=0;b<5;b++)
	{
		scanf("%d",&m[b]);
		printf("\n\tYour given Number is:%d",m[b]);
	}  
			printf("\n\t\tYour values are");
	   for(b=0;b<5;b++)
	{
				printf(",%d",m[b]);
	}
	   for(m[b]=1;m[b]<5;m[b]++)
	{
		  if (m[b]%2==0)
		{
			printf("\n\t %d",m[b]);
		}
		  else 
		{
			m[b]=m[b]+1;
			printf("\n\t %d",m[b]);
		}
	}
}
