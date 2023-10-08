#include <stdio.h>
#include <conio.h>

int fibonacci(int m)
{
    if (m == 0 || m == 1)
    {
        return 0;
    }
    else if (m == 2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(m - 1) + fibonacci(m - 2));
    }
}

int main()
{
    int m;
mbb:
    printf("Enter number");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        printf("%d \n", fibonacci(i));
    }

    goto mbb;

    return 0;
}