#include<stdio.h>
   int main()
{
	int m[20],i;
	 printf("\n\t Enter Twenty Numbers");
	 for(i=0;i<5;i++)
	{
		scanf("%d",&m[i]);
	}
	 printf("\n\t Your given Numbers are:");
	 for(i=1;i<5;i++)
	{
		printf("%2d",m[i]);
	}
	 for(i=1;i<5;i++)
	{
		 if(m[0]<m[i])
		{
			m[0]=m[i];
		} 
	}
	 printf("\n M=%2d",m[0]);                  
	  for(i=1;i<5;i++)
	{
		 if(m[0]>m[i])
		{
			m[0]=m[i];
		} 
	}
	 	printf("\n S=%2d",m[0]);	
printf("%d",8 & 7);
}
