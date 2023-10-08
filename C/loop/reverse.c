#include <stdio.h>
int main()
{
	int m, b, r = 0;
	printf("\n\t Enter any Number");
	scanf("%d", &m);
	while (m > 0)
	{
		b = m % 10;
		r = r * 10 + b;
		m = m / 10;
	}
	printf("\n Reverse No=%d", r);
}
