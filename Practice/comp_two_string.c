#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char m[20], b[20], mb[50];
    int i = 0, j = 0, flag = 0;

    printf("Enter your name \n");
    gets(m);

    printf("Enter your surname \n");
    gets(b);

    int len_m = strlen(m);
    int len_b = strlen(b);

    if (len_m != len_b)
    {
        printf("fuck man");
    }
    while (i < len_m)
    {

        if (m[i] != b[j])
        {
            printf("fuck man");
            break;
        }
        else
        {
            i++, j++, flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("Fuck yeah !!");
    }

    return 0;
}