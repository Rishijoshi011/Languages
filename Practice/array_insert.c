#include <stdio.h>
#include <conio.h>

int main()
{
    int m[10], size, i, j, x, pos;

    printf("Enter size of array");
    scanf("%d", &size);

    printf("Enter elements");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &m[i]);
    }

    printf("Enter position of element");
    scanf("%d", &pos);

    printf("Enter element");
    scanf("%d", &x);

    for (i = size - 1; i > pos - 1; i--)
    {
        m[i + 1] = m[i];
    }

    m[pos] = x;
    size++;

    for (i = 0; i < size; i++)
    {
        printf("\n%d", m[i]);
    }

    return 0;
}