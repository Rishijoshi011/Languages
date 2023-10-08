#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 void update(int *a ,int *b)
{
	int add,sub;
	add=*a+*b;
	sub=abs(*a-*b);
	*a=add;
	*b=sub;
}
    int main()
{
	system("COLOR 0B");
	int a,b;
	int *pa=&a,*pb=&b;
	scanf("%d%d",&a,&b);
	update(a,b);
	printf("%d\n%d",a,b);
}
