#include<stdio.h>
#include<conio.h>
int max(int,int);
   int main()
{
 	system("COLOR 0B"); 
	 int m,b;
	 printf("\n\t Enter any two values");
	 scanf("%d%d",&m,&b);
	 max(m,b); 
	 	
}
	int max(int m,int b)
{
	 if(m<b)
	{
		printf("\n\tMaximum number is:%3d",b);
	}
	 else 
	{
		printf("\n\tMaximum number is:%3d",m);
	}
}
