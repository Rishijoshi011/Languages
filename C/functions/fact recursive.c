#include<stdio.h>
#include<conio.h>
int fact(int);
  int main()
{
	system("COLOR 0B");
	int m,sum=1;
	printf("\n\t Enter a Number");
	scanf("%d",&m);
	sum=fact(m);
	printf("%7d",sum);
	return 0;
}
	int fact(int m)
{
	int l;
	 if(m==1)
	{
		return 1;
	}
	 else
		 l=m*fact(m-1);
} 
