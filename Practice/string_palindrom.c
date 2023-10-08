#include <stdio.h>
#include <conio.h>

int main()
{
    char m[20];
    int length_m = 0, s = 0, i = 0;

    printf("Enter your name");
    gets(m);

    for (int i = 0; m[i] != NULL; i++)
    {
        length_m++;
    }

    for (i = 0; i < length_m / 2; i++)
    {
        if (m[i] == m[length_m - i - 1])
        {
            s++;
        }
    }

    if (s == i)
    {
        printf("Fuck yeah");
    }
    else
    {
        printf("bro!!");
    }

    return 0;
}