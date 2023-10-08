#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	FILE *m;
	int b;
	m=fopen("f2.txt","w+");
	fprintf(m,"11");
	fseek(m,7,SEEK_SET);
	fprintf(m,"07");
	rewind(m);
	fprintf(m,"011");
	b=ftell(m);
	printf("\n\tByte:%3d",b);
}
