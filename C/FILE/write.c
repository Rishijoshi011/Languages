#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	FILE *m;
	char b;
	m=fopen("Write.txt","w");
	fputs("Hey there",m);
}
