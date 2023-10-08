#include<stdio.h>
#include<conio.h>
#include<string.h>
	struct b
{
	char n[20];
	int en;
	float per;
	char gr;
};   
   int main()
{
	system("COLOR 0B");
	struct b m[2];
	int i;
	printf("\n\tEnter your Name,Enrollment,Percentage,Grade");
	 for(i=0;i<2;i++)
	{
		scanf("%s",m[i].n);
		scanf("%d",&m[i].en);
		scanf("%f",&m[i].per);
		fflush(stdin);
		scanf("%c",&m[i].gr);
	}
	 for(i=0;i<2;i++)
	{
		printf("\n\t Name:%4s \n\t En:%4d \n\t Per:%4.2f \n\t Grade:%4c",m[i].n,m[i].en,m[i].per,m[i].gr);
	}
}
