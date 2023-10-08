#include<stdio.h>
#include<conio.h>

	struct time
{
	int hour, min;	
};
	int main()
{
	system("COLOR 0B");
	struct time t, *ptr;
	ptr = &t;
	printf("\n\tEnter hour and minuts");
	scanf("%d %d",&ptr -> hour,&ptr -> min);
	printf("\n\tTime is %d : %d",ptr -> hour,ptr -> min);
}
