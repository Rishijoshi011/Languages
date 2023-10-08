#include<stdio.h>
#include<conio.h>
#include<string.h>
	struct m
{
	char n[20];
	int en;
	float per;
	char gr;
};   
   int main()
{
	system("COLOR 0B");
	struct m b;
	printf("\n\tEnter your Name,Enrollment,Percentage,Grade");
	scanf("%s%d%f",b.n,&b.en,&b.per);
	system("cls");
	fflush(stdin);
	scanf("%c",&b.gr);
	printf("\n\tName:%3s\n\tEnrollment:%3d\n\tPercentage:%3.2f\n\tGrade:%c",b.n,b.en,b.per,b.gr);
}
