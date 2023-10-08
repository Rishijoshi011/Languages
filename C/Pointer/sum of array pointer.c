#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	int m[10]={1,2,3,4,5,6,7,8,9,10};
	int *b,sum=0,i;
	b=&m[0];
	 for(i=0;i<5;i++)
	{
		sum=sum+*b;
		b++;
	}
	 printf("\n\t sum=%d",sum);
}
