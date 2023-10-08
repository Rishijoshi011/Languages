#include <stdio.h>
int main()
{
	FILE *m, *m2;
	char b[100], l;
	printf("Enter the b to open for reading \n");
	scanf("%s", b);
	m = fopen(b, "r");
	if (m == NULL)
	{
		printf("Cannot open file %s \n", b);
		return;
	}
	printf("Enter the b to open for writing \n");
	scanf("%s", b);
	m2 = fopen(b,"w");
	if (m2 == NULL)
	{
		printf("Cannot open file %s \n", b);
		return;
	}
	l = fgetc(m);
	while (l != EOF)
	{
		fputc(l, m2);
		l = fgetc(m);
	}
	printf("\nContents copied to %s", b);
	fclose(m);
	fclose(m2);
}
