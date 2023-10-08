#include <stdio.h>

int Shell_Sort(int m[], int size)
{
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i += 1)
        {
            int temp = m[i];
            int j;
            for (j = i; j >= gap && m[j - gap] > temp; j -= gap)
            {
                m[j] = m[j - gap];
            }
            m[j] = temp;
        }
    }
    return 0;
}

void Display(int m[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", m[i]);
    }
}

int main()
{
    int m[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 11}, i;
    int size = sizeof(m) / sizeof(m[0]);

    printf("Array before sorting: \n");
    Display(m, size);

    Shell_Sort(m, size);

    printf("\nArray after sorting: \n");
    Display(m, size);

    return 0;
}
