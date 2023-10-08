#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	system("COLOR 0B");
	char m[20], b[20];
	int i, j, flag = 0, len = 0, len2 = 0;
	printf("\n\tEnter something\n");
	gets(m);
	printf("\n\tEnter something\n");
	fflush(stdin);
	gets(b);
	len = strlen(m);
	len2 = strlen(b);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (m[i + j] == b[j])
			{
				printf("\n\tFound at %d", i);
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
	{
		printf("\n\tStrings are not same");
	}
}
