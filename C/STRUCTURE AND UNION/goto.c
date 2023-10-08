#include<stdio.h>
#include<conio.h>
  struct weapon
{
	char name[20];
	float price;
	int quantity;
	int rounds; 
};
   int main()
{
	system("COLOR 0B");
    struct weapon mb;
    int i;
	char ans[3];
    go:
   	printf("\n\tEnter name of weapon");
	scanf("%s",mb.name);
	fflush(stdin);
	printf("\n\tEnter price of weapon(In $)");
	scanf("%f",&mb.price);
	fflush(stdin);
	printf("\n\tEnter quantity of weapon");
	scanf("%d",&mb.quantity);
	fflush(stdin);
	printf("\n\tEnter rounds(Per weapon)");
	scanf("%d",&mb.rounds);
	fflush(stdin);	
	printf("\n    %s    %.2f    %d    %d\n",mb.name,mb.price,mb.quantity,mb.rounds);
	fflush(stdin);
	printf("\n\tEnter Yes for second loadout");
	fflush(stdin);
	scanf("%s",ans);
	printf("%s",ans);	
	 	 if(ans=="Yes" || "yes")
		{
			goto go;
		}
	 	 else if(ans=="no" || "No")
		{
			printf("\n\tKal aana");
		}
	 	 else 
		{
			printf("00000000000000000000");
		}	
	return 0;
}
