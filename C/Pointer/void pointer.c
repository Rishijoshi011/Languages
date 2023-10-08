#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	 void *m;
	 int b=11;
	 float l=7.011;
	 m=&b;
	 printf("\n\tVoid pointer to int : %d",*(int *)m);
	 m=&l;
	 printf("\n\tVoid pointer to float : %f",*(float *)m);
}
