#include <stdio.h>
int main()
{
	char m[20], b[20];
	char mer[40];
	int i, l, s = 0;
	printf("\n\tEnter your name\n");
	gets(m);
	printf("\n\tEnter your surname\n");
	gets(b);
	for (i = 0; m[i] != '\0'; i++)
	{
		mer[s] = m[i];
		s++;
	}
	for (l = 0; b[l] != '\0'; l++)
	{
		mer[s] = b[l];
		s++;
	}
	printf("Full name : %s", mer);
}
