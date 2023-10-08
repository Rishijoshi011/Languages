#include <stdio.h>

void Display(int *m, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", m[i]);
    }
    printf("\n");
}

void merge(int m[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (m[i] < m[j])
        {
            B[k] = m[i];
            i++;
            k++;
        }
        else
        {
            B[k] = m[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = m[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = m[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        m[i] = B[i];
    }
}

void Merge_Sort(int m[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        Merge_Sort(m, low, mid);
        Merge_Sort(m, mid + 1, high);
        merge(m, mid, low, high);
    }
}

int main()
{
    int m[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 11};
    int size = 10;
    printf("Before sorting \n");
    Display(m, size);
    Merge_Sort(m, 0, 9);

    printf("After sorting \n");
    Display(m, size);

    return 0;
}