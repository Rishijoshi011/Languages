#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
   int main()
{
	system("COLOR 0B");
	int *m,*temp;
	int b,i;
	printf("\n\tEnter how many values you want to type");
	scanf("%d",&b);
	m=(int *)malloc(b*sizeof(int));
	printf("\n\tEnter new");
	scanf("%d",&b);
	printf("\n\tEnter values");
	m=realloc(m,b*sizeof(int));
	temp=m;
	 for(i=0;i<b;i++)
	{
		scanf("%d",m);
		m++;	
	}
	 m=temp;
	 printf("\n\t Your given values:");
	 for(i=0;i<b;i++)
	{
		printf("%5d",*m);
		m++;
	}
}
