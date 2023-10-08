#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	char m=77,*b;
	int  m1=11,*b1;
	float m2=7.11,*b2;
	 b=&m;b++;
	 printf("\n\tIncrement of char:%3u",b);
	 b--;
	 printf("\n\tDecrement of char:%3u",b);
	 b1=&m1;b1++;
	 printf("\n\n\tIncrement of int:%3u",b1);
	 b1--;
	 printf("\n\tDecrement of int:%3u",b1);
	 b2=&m2;b2++;
	 printf("\n\n\tIncrement of float:%3u",b2);
	 b2--;
	 printf("\n\tDecrement of float:%3u",b2);

}
