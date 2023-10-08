#include<stdio.h>
#include<conio.h>
#include<string.h>
	struct emp
{
	char n[20];
	char id[20];
	int sal;
};   
   int main()
{
	system("COLOR 0B");
	struct emp m[3];
	int i;
	printf("\n\tEnter your Name,Id,Salary");
	 for(i=0;i<3;i++)
	{
		scanf("%s",m[i].n);
		scanf("%s",&m[i].id);
		scanf("%d",&m[i].sal);
	}
	 for(i=0;i<3;i++)
	{
		printf("\n\t Name:%4s \n\t En:%4s \n\t Per:%4d",m[i].n,m[i].id,m[i].sal);
	}
}
