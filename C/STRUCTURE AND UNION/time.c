#include<stdio.h>
#include<conio.h>
	struct m
{
	int ho;
	int min;
	int sec;	
};
  int main()
{
	system("COLOR 0B");
	struct m b;
	printf("\n\t Enter Hours,Minutes,second");
	scanf("%d%d%d",&b.ho,&b.min,&b.sec);
	printf("\n\t%d:%d:%d",b.ho,b.min,b.sec);
}
