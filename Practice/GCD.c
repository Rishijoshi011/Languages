#include <stdio.h>
#include <conio.h>

int GCD(int m, int b)
{
    if (m <= b && b % m == 0)
    {
        return m;
    }
    else if (m > b)
    {
        return GCD(m, b);
    }
    else
    {
        return (GCD(m, b % m));
    }
}

int main()
{
    int m, b;

    printf("Enter Two number");
    scanf("%d%d", &m, &b);

    return 0;
}