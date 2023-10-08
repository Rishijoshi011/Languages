#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int split(int m[], int lower_index, int upper_index)
{

    int pivot = m[upper_index];

    int i = (lower_index - 1);

    for (int j = lower_index; j < upper_index; j++)
    {
        if (m[j] <= pivot)
        {

            i++;

            swap(&m[i], &m[j]);
        }
    }

    swap(&m[i + 1], &m[upper_index]);

    return (i + 1);
}

void quickSort(int m[], int lower_index, int upper_index)
{
    if (lower_index < upper_index)
    {

        int n = split(m, lower_index, upper_index);

        quickSort(m, lower_index, n - 1);

        quickSort(m, n + 1, upper_index);
    }
}

void Display(int m[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("Value of m[%d] is : %d\n", i, m[i]);
    }
    printf("\n");
}

int main()
{
    int m[] = {15, 14, 13, 12, 11};

    int n = sizeof(m) / sizeof(m[0]);

    printf("Before Sorting\n");
    Display(m, n);

    quickSort(m, 0, n - 1);

    printf("After Sorted \n");
    Display(m, n);
}