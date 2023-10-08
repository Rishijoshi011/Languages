#include<stdio.h>
#include<conio.h>
	union st
{
	float ptg;
	float pti;
	float cgpa;
};   
   int main()
{
	system("COLOR 0B");
	union st m;
	int b;
	printf("\n\tPress 1 for Percentage\n\tPress 2 for Percentile\n\tpress 3 for CGPA");
	scanf("%d",&b);
	 switch(b)
	{
		 case 1 : printf("\n\tEnter Your Percentage");
		 		  scanf("%f",&m.ptg);
		 		  printf("Your given Percentage:&3.2f",m.ptg);
		 		  break;
		 case 2 : printf("\n\tEnter your Percentile");
		 		  scanf("%f",&m.pti);
		 		  printf("\n\tYour given Percentile:%3.2f",m.pti);
				  break;
		 case 3 : printf("\n\tEnter your CGPA");
		 		  scanf("%f",&m.cgpa);
		 		  printf("\n\tYour given CGPA:%3.2f",m.cgpa);
		 		  break;
		 default : printf("\n\tNone of this");
	}
}
