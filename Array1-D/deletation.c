#include <stdio.h>
int main()
{
	int m[10], size, i, pos, k;
	printf("\n\t Enter size of an Array");
	scanf("%d", &size);
	printf("\n\t Enter Elements of Array");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &m[i]);
	}
	printf("\n\t Elements of Array");
	for (i = 0; i < size; i++)
	{
		printf("\n\t m[%d] is m[%d] ", i, m[i]);
	}
	printf("\n\t Enter a slot of arrey which you want to delete");
	scanf("%d", &pos);
	for (k = pos - 1; k < size - 1; k++)
	{
		m[k] = m[k + 1];
	}
	size--;
	for (i = 0; i < size; i++)
	{
		printf("\n\t m[%d] is m[%d]", i, m[i]);
	}
}
