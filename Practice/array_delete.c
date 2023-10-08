#include <stdio.h>
#include <conio.h>

int main()
{
    int m[10], size, i, x, pos;

    printf("Enter size of the array");
    scanf("%d", &size);

    printf("Enter elements");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &m[i]);
    }

    printf("Enter position to delete elements");
    scanf("%d", &pos);

    for (int i = pos - 1; i < size - 1; i++)
    {
        m[i] = m[i + 1];
    }
    size--;

    for (int i = 0; i < size; i++)
    {
        printf("\n%d", m[i]);
    }

    return 0;
}