#include<stdio.h>
#include<conio.h>
	int main()
{
	system("COLOR 0B");
	char m[50];
	int i=0;
	printf("\n\tEnter your name");
	gets(m);
	 while(m[i]!= '\0')
	{
		 if(m[i] >= 'a' && m[i] <= 'z')
		{
			m[i] = m[i] - 32;
		}
		i++;
	}
	puts(m);
}
