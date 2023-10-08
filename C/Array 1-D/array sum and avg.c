#include<stdio.h>
   int main()
{
	int m[5],b,r=0;
	float j=0;  
	  printf("\n\t Enter any Five Number");
	  for(b=0;b<5;b++)
	{
		scanf("%d",&m[b]);
     //   printf("\n\t Your number=%d",b);	
	}
	printf("\n\tThe elements are:%d",b);
	  for(b=0;b<5;b++)
	{
		printf("\t%d",m[b]);
	}
	    for(b=0;b<5;b++)
	{
		r=r+m[b];
		j=r/5;
	}
	 printf("\n\t sum=%d",r);
	 printf("\n\t avg=%f",j);
}
