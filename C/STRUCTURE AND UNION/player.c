#include<stdio.h>
#include<conio.h>
	struct player 
{
  	char n[20];
  	char tn[20];
  	int sc;
  	float avg;
};

  int main()
{
	system("COLOR 0B");
	struct player b;
	printf("\n\tEnter Name,Teamname,Score,Average");
	scanf("%s%s%d%f",b.n,b.tn,&b.sc,&b.avg);
	printf("\n\t Name:%4s \n\t Teamname:%4s \n\t Score:%4d \n\t Average:%4.2f",b.n,b.tn,b.sc,b.avg);	
}
