#include<stdio.h>
#include<conio.h>
int sub(int,int);
    int main()
{
	system("COLOR 0B");
	int m,b,sum;
	 printf("\n\tEnter two values");
	 scanf("%d%d",&m,&b);
	sum=sub(m,b);
	printf("\n\t Substraction of your values:%3d",sum);
	
}
	int sub(int m,int b)
{
	 int sum=0;
	 sum=m-b;
	return (sum);
}
