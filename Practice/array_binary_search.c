#include <stdio.h>
#include <conio.h>

void bin_search(int m[], int size, int found)
{
    int max = size - 1, mid = 0, low = 0;

    while (low <= max)
    {
        mid = (max + low) / 2;

        if (m[mid] == found)
        {
            printf("Fuck yeah!!");
            return;
        }
        else if (found > m[mid])
        {
            max = mid - 1;
        }
        else if (found < m[mid])
        {
            low = mid + 1;
        }
    }
    if (low >= max)
    {
        printf("Fuck off");
    }
}

int main()
{
    int m[10], size, found;

    printf("Enter size of an array");
    scanf("%d", &size);

    printf("Eneter elements");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &m[i]);
    }

    printf("Enter number to found");
    scanf("%d", &found);

    bin_search(m,size,found);

    return 0;
}