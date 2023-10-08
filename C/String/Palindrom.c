#include <stdio.h>
#include <string.h>
int main()
{
	char m[100];
	int i, l, s = 0;
	printf("\n\t Enter Your Name");
	gets(m);
	l = strlen(m);
	for (i = 0; i < l / 2; i++)
	{
		if (m[i] == m[l - i - 1])
		{
			s++;
		}
	}
	if (s == i)
	{
		printf("\n\t Your Name is Palindrome");
	}
	else
	{
		printf("\n\t Your Name isn't Palindrome");
	}
}
