#include <stdio.h>
#include <conio.h>

void Bubble_Sort(int m[], int size)
{
    for (int i = 0; i < size - 1; i++) // For number of passes
    {
        printf("Working on pass %d \n", i + 1);
        int sorted = 1;
        for (int j = 0; j < size - 1 - i; j++) // For number of comparison
        {
            if (m[j] > m[j + 1])
            {
                int temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
                sorted = 0;
            }
        }
        if (sorted == 1)
        {
            return;
        }
    }
}

int Display(int m[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", m[i]);
    }
    printf("\n");
}

int main()
{
    int m[20], size;

    printf("Enter size of an Array \n");
    scanf("%d", &size);

    printf("Enter elements \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &m[i]);
    }
    printf("Before sorting the Array \n");
    Display(m, size);

    Bubble_Sort(m, size);

    printf("After sorting the Array \n");
    Display(m, size);

    return 0;
}