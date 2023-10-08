#include<stdio.h>
#include<conio.h>
   int main()
{
	system("COLOR 0B");
	int m=7;
	int* b;
	char r=77; //77=M 66=B
	char* j;
	float l=7.07;
	float* s;
	b=&m; *b=11;
	printf("\n\t Using pointer%4d",m);
	j=&r; *j=66;
	printf("\n\t char:%c",r);
	s=&l; *s=11.011;
	printf("\n\t Float:%3f",l);
}
