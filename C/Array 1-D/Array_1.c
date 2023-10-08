#include<stdio.h>
   int  main()
{
	int m[5],b;  
	  printf("\n\t Enter any Five Number");
	  for(b=0;b<5;b++)
	{
		scanf("%d",&m[b]);
        printf("\n\t Your number:%d",b);	
	}
	printf("\n\tThe elements are");
	  for(b=0;b<5;b++)
	{
		printf("%3d",m[b]);
	}
}
