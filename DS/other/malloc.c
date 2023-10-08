#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int *ptr;
    int n;
    printf("Enter size of array");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) 
    {
        printf("Enter element at %d location", i);
        scanf("%d", &ptr[i]);
    }
    system("cls");
    for (int i = 0; i < n; i++)
    {
        printf("Element of location %d is %d\n", i, ptr[i]);
    }
    printf("Enter new size of array");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at %d location", i);
        scanf("%d", &ptr[i]);
    } 
    system("cls");
    for (int i = 0; i < n; i++)
    {
        printf("Element of location %d is %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}