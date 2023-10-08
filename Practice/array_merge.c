#include <stdio.h>
#include <conio.h>

int main()
{
    int m[10], b[10], mb[20], size_of_m, size_of_b, size_of_mb, j = 0;

    printf("Enter size of First array");
    scanf("%d", &size_of_m);

    for (int i = 0; i < size_of_m; i++)
    {
        scanf("%d", &m[i]);
    }

    printf("Enter size of Second array");
    scanf("%d", &size_of_b);

    for (int i = 0; i < size_of_b; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size_of_m; i++)
    {
        mb[i] = m[i];
    }
    
    for (int i = size_of_m; i < size_of_b, j < size_of_b; i++, j++)
    {
        mb[i] = b[j];
    }

    size_of_mb = size_of_m + size_of_b;

    for (int i = 0; i < size_of_mb; i++)
    {
        printf("%7d", mb[i]);
    }

    return 0;
}