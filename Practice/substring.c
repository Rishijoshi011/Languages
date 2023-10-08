#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char m[50], sub[50];
    char temp[50];
    int i = 0, j = 0, len_m = 0, len_sub = 0, pos;

    printf("Enter main String \n");
    gets(m);

    printf("Enter postion \n");
    scanf("%d", &pos);

    if (pos > len_m)
    {
        printf("Invalid postion \n");
    }

    printf("Enter Sub String \n");
    fflush(stdin);
    gets(sub);

    len_m = strlen(m);
    len_sub = strlen(sub);

    for (i = len_m; i >= pos; i--)
    {
        m[i + len_sub] = m[i];
    }

    for (int i = 0; i < len_sub; i++)
    {
        m[pos + i] = sub[i];
    }

    printf("Result is here: %s", m);

    return 0;
}