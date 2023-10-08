#include<stdio.h>
#include<conio.h>
  int main()
{
	system("COLOR 0B");
	int m[5]={11,12,13,14,15};
	int *b,i;
	 b=&m[0];
	 for(i=0;i<5;i++)
	{
		printf("\nElement of Array :%3d",*b);
		b++;
	}
}
