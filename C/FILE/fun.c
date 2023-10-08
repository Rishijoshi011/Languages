#include<stdio.h>
#include<conio.h>
#define size 20
  int main ()
{
	system("COLOR 0B");
	FILE *m;
	char b[size],b2[size],b3[size],c[size];
	m=fopen("fun.txt","w");
	printf("\n\tEnter something from keyborad");
	fscanf(m,"%s",b);
	fprintf(m,"%s",b);
	fgets(m,size,stdin);
	fputs("hello",b2);
	gets(b3);
	puts(b3);
	fprintf(m,"11");
	fseek(m,7,SEEK_SET);
	fprintf(m,"07");
	rewind(m);
	 while(1) {
      c=fgetc(m);
      if( feof(m) ) { 
         break ;
      }
      printf("%c", c);
   }
}
