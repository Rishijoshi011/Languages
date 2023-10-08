#include<stdio.h>
#include<conio.h>
	union book
{
	char t[20];
	char auth[20];
	int pg;
	float p;
};   
   int main()
{
	system("COLOR 0B");
	union book m;
	printf("\n\tEnter Title of book");
	scanf("%5s",m.t);
	printf("\n\tTiltle:%5s\n",m.t);
	printf("\n\tEnter Author name");
	scanf("%s",m.auth);
	printf("\n\tAuthor:%5s\n",m.auth);
	printf("\n\tEnter Pages");
	scanf("%d",&m.pg);
	printf("\n\tPages:%4d\n",m.pg);
	printf("\n\tEnter price");
	scanf("%f",&m.p);
	printf("\n\tPrice:%4.2f",m.p);
}
