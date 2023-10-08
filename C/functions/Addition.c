#include<stdio.h>
#include<conio.h>
int add(int,int);
    int main() 
{
	system("COLOR 0B");
	int m,b;
	 printf("Enter two values");
	 scanf("%d%d",&m,&b);
	 addition(m,b);
}
	int addition(int m,int b) 
{
	 int sum=0;
	 sum=m+b;
	 printf("\n\tAdiition of your values:%3d",sum);
}
