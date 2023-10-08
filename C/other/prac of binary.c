#include <stdio.h>
#include <conio.h>
#define MAX 20
int binsearch(int arr[], int size, int found)
{
	int i, high = size - 1, mid = 0, low = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] == found)
		{
			printf("\n\tRespect ++");
			break;
		}
		else if (found > arr[mid])
		{
			low = mid + 1;
		}
		else if (found < arr[mid])
		{
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("\n\t Kal aana. Respect --");
	}
}
int main()
{
	system("COLOR 0B");
	int arr[MAX], size, i, found;
	printf("\n\tEnter size of array");
	scanf("%d", &size);
	printf("\n\tEnter %d elements of array", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n\tWhich element do you want to find");
	scanf("%d", &found);
	binsearch(arr, size, found);
}
