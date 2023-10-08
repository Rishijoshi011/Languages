#include<stdio.h>
#include<conio.h>
  int main()
{
	system("COLOR 0B");
	int m,b,*l,*s,sum=0;
	printf("\n\tEnter any two numbers");
	scanf("%d%d",&m,&b);
	l=&m;s=&b;
	sum=*l+*s;
	printf("\n\t Addition of Pointer :%3d",sum);
}
