#include<stdio.h>
#include<conio.h>
    int main()
{
	 int m[10],size,i,j,temp;
	 printf("\n\t Enter a size of an Array within 10");
	 scanf("%d",&size);
	 printf("\n\t Enter elements of an Array");
	  for(i=0;i<size;i++)
	{
		scanf("%d",&m[i]);
	}
	 system("cls");
	 printf("\n Given elements are:");
	 for(i=0;i<size;i++)
	{
		printf("\n\t m[%d] is m[%d] ",i,m[i]);
	}
	  for(i=0;i<size-1;i++)
	{
		    for(j=0;j<size-1;j++)
		{
		    	if(m[j]>m[j+1])
			{
		    	temp=m[j];
		    	m[j]=m[j+1];
		    	m[j+1]=temp;
			}
		}
	}
	  system("cls");
	  printf("\n Sorted elements are:");
	  for(i=0;i<size;i++)
	{
		printf("\n\t m[%d] is m[%d]",i,m[i]);
	}
}
