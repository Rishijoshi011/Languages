#include<stdio.h>
#include<conio.h>
int fact(int);
    int main()
{
	system("COLOR 0B");
	int m,b;
	printf("\n\tEnter any value");
	scanf("%d",&m);
	b=fact(m);
	printf("\n\tFactorial of your number:%3d\n",b);
}
	int fact(int m)
{
	int b;
	  if(m==1)
	 return (1);
	 else
	 b=m*fact(m-1);
	 return(b);
}
