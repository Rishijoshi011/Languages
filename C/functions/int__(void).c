#include<stdio.h>
#include<conio.h>
int add(void);
    int main()
{
	system("COLOR 0B");
	 addition();
	
}
	int addition(void)
{
	 int sum=0;
	 int m,b;
	 printf("Enter two values");
	 scanf("%d%d",&m,&b);
	 sum=m+b;
	 printf("\n\tAdiition of your values:%3d",sum);
}
