#include <stdio.h>
#include <conio.h>

void Selection_sort(int *m, int size)
{
    int index_of_Min, temp;

    for (int i = 0; i < size - 1; i++)
    {
        index_of_Min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (m[j] < m[index_of_Min])
            {
                index_of_Min = j;
            }
        }
        temp = m[i];
        m[i] = m[index_of_Min];
        m[index_of_Min] = temp;
    }
}

void Display(int *m, int size)
{
    printf("Element of an array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("value of a[%d] is %d\n", i, m[i]);
    }
}

int main()
{
    int m[50], size;

    printf("Enter the size of an array\n");
    scanf("%d", &size);

    printf("Enter the element of an array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &m[i]);
    }
    printf("\n Befor sorting the array \n");
    Display(m, size);

    Selection_sort(m, size);

    printf("\n After sorting the array \n");
    Display(m, size);
    return 0;
}