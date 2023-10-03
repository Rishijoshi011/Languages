#include<stdio.h>
    int main()
{
	int m[10],size,i,val;
	 printf("\n\t Eneter The size of Array within Ten");
	 scanf("%d",&size);
	 printf("\n\t Enetr the elements of Array");
	  for(i=0;i<size;i++)
	{
	   scanf("%d",&m[i]); 	
	}  
	 printf("\n\t Your given Elements are: ");
	  for(i=0;i<size;i++)
	{
		printf("\n\t  m[%d] is m[%d]",i,m[i]);
	}
	  printf("\n\t Which element you want to find ");
	  scanf("%d",&val);	
	    for(i=0;i<size;i++)
	{
		 if(val==m[i])
		{
			printf("\n\t Found data:m[%d] is m[%d]",i,m[i]);
			break;	
		} 
	}
	 if(i==size)
	{
		printf("\n\t Error 404");
	}
}
