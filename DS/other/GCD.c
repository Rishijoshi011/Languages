#include<stdio.h>
#include<conio.h>

	int gcd(int m,int m2)
{
	 if(m2 != 0)
		return gcd(m2,m %m2);
	 else
		return m;
}
	int main()
{
	system("COLOR 0B");
	int m,m2;
	printf("\n\tEnter two num");
	scanf("%d%d",&m,&m2);
	printf("\n\tAns : %d",gcd(m,m2)); 
}