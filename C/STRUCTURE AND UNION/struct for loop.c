#include<stdio.h>
#include<conio.h>
  struct weapon
{
	char name[20];
	float price;
	int quantity;
	int round; 
};
   int main()
{
	system("COLOR 0B");
    struct weapon mb[3];
    int i;
   	 for(i=0;i<3;i++)
	{
   		printf("\n\tEnter name of weapon");
		scanf("%s",mb[i].name);
		fflush(stdin);
		printf("\n\tEnter price of weapon");
		scanf("%f",&mb[i].price);
		fflush(stdin);
		printf("\n\tEnter quantity of weapon");
		scanf("%d",&mb[i].quantity);
		fflush(stdin);
		printf("\n\tEnter rounds");
		scanf("%d",&mb[i].round);
		fflush(stdin);	
	}
	 printf("\n    Name    Price    Quantity    Round");
	 for(i=0;i<3;i++)
	{
		printf("\n    %s    %.2f    %d    %d",mb[i].name,mb[i].price,mb[i].quantity,mb[i].round);
		fflush(stdin);
	}
	return 0;
}
