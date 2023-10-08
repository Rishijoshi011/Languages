#include<stdio.h>
#include<string.h>
#include<conio.h>
    int main()
{
	char m[100];
	int i;
	 printf("\n\t Enter your Name");
	 gets(m);
	 system("cls");
	 printf("\n\t Your given name is:%4s",m);
	 strrev(m);
	 printf("\n\t Revers of Your name:%4s",m);
}
