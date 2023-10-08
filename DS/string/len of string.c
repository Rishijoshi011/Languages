#include<stdio.h>
#include<conio.h>
	int main()
{
    system("COLOR 0B");
    char m[20]; 
    int i=0;
    printf("\n\tEnter your name\n");
    gets(m);
     while(m[i] != '\0')
    {
    	i++;
	}
	printf("\n\tLength  of string is : %d",i);
}
