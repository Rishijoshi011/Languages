#include <stdio.h>
int main()
{
	int m[10], size, i, pos, val, k;
	printf("\n\t Eneter The size of Array within Ten");
	scanf("%d", &size);
	printf("\n\t Enetr the elements of Array");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &m[i]);
	}
	printf("\n\t Your given Elements are: ");
	for (i = 0; i < size; i++)
	{
		printf("\n\t  m[%d] is m[%d]", i, m[i]);
	}
	printf("\n\t Enter the Number of slot which you want to add Number");
	scanf("%d", &pos);
	printf("\n\t Enter the Value");
	scanf("%d", &val);
	for (k = size - 1; k > pos - 1; k--)
	{
		m[k + 1] = m[k];
	}
	m[pos] = val;
	size = size + 1;
	for (i = 0; i < size; i++)
	{
		printf("\n\t m[%d] is m[%d]", i, m[i]);
	}
}
