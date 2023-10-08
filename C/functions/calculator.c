#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int multi(int,int);
float div(float,float);
   int main()
{
	system("COLOR 0B");
	int m,b;
	printf("\n\tEnter any two values");
	scanf("%d%d",&m,&b);
	add(m,b);
	sub(m,b);
	multi(m,b);
	div(m,b);
}
 	int add(int m, int b)
 {
 	int sum=0;
 	 sum=m+b;
 	 printf("\n\tAdiition of your values:%3d\n",sum);
 }
 	int sub(int m,int b)
{
	int sum=0;
	sum=m-b;
	printf("\n\tSubstraction of your values:%3d\n",sum);
}
	int multi(int m,int b)
{
	int sum=0;
	sum=m*b;
	printf("\n\tMultiplication of your values:%3d\n",sum);
}
	float div(float m,float b)
{
	float sum=0;
	sum=m/b;
	printf("\n\tDivision of your values:%3.2f",sum);
}
