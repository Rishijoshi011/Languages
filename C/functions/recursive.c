#include<stdio.h>
#include<conio.h>
int pow(int,int);
   int main()
{
	system("COLOR 0B");
	int m,b;
	pow(m,b);
}
	int pow(int m, int b)
{
	int l,s,sum=0;
	printf("\n\tEnter number and it's power");
	scanf("%d%d",&l,&s);
    sum=pow(l,s);
	printf("%d",sum);	
}
