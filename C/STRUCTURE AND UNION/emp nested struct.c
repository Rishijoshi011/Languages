#include<stdio.h>
#include<conio.h>
#include<string.h>
	 struct sal 
	{
		int ba;
		int da;
		int ta;
		int hra;
	};
	struct emp
{
	char n[20];
	char id[20];
	struct sal m2;
};   
   int main()
{
	system("COLOR 0B");
	struct emp m;
	 printf("\n\tEnter your Name,Id,Basic salary,DA,TA,HRA");
	 scanf("%s%s%d%d%d%d",m.n,m.id,&m.m2.ba,&m.m2.da,&m.m2.ta,&m.m2.hra);
	 printf("\n\t Name:%4s \n\t ID:%4s \n\t BA:%4d \n\t DA:%4d",m.n,m.id,m.m2.ba,m.m2.da);
	 printf("\n\t TA:%4d \n\t HRA:%4d",m.m2.ta,m.m2.hra);
}
