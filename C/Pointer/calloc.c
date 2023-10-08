#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
   int main()
{
	system("COLOR 0B");
	int *m,*temp;
	int b,i,n;
	printf("\n\tEnter slots");
	scanf("%d",&b);
	printf("\n\t Enter sub-slots");
	scanf("%d",&n);
	m=(int *)calloc(b,sizeof(int));
	temp=m;
	 for(i=0;i<b*n;i++)
	{
		scanf("%d",m);
		m++;	
	}
	 m=temp;
	 printf("\n\t Your given values:");
	 for(i=0;i<b*n;i++)
	{
		printf("%3d",*m);
		m++;
	}
}
