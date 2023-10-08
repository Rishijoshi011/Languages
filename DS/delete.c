#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("\n\n\nEnter size of array \n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at %d location \n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Element of location %d is %d\n", i, ptr[i]);
    }

    printf("\n\n\n");

    free(ptr);
    return 0;
}