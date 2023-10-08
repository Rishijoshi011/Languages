#include<stdio.h>
#include<conio.h>
	struct m   //64 bit comp 36. 32 bit comp 32
{
	int h;
	int x; 		//Minimum 64 bit comp 28 32 bit comp 24
	float z;
	double a;
	char j[5];//4+1
	char y;//2
	char i;//3
};   
   int main()
{
	system("COLOR 0B");
	printf("\n\t%d",sizeof(struct m));
}
