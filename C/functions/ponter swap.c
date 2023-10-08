#include<stdio.h>
#include<conio.h>
int swap(int*,int*); 
   int main()
{
	system("COLOR 0B");
	int m,b;
	printf("\n\tEnter any two values");
	scanf("%d%d",&m,&b);
	swap(&m,&b);
}
	int swap(int* m,int* b)
{
	int temp=0;
	printf("\n\tBefore swap First value:%d\n\t\t    Second value:%d",*m,*b);
	temp=*m;
	*m=*b;
	*b=temp;
	printf("\n\n\tAfter swap First value:%d\n\t\t   Second value:%d",*m,*b);
}
