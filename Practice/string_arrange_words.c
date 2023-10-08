#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char m[50], sub[50], temp;
    int i = 0, j = 0, len_m = 0, len_sub = 0, flag = 0;

    printf("Enter your name \n");
    gets(m);

    len_m = strlen(m);

    for (i = 0; i < len_m - 1; i++)
    {
        for (j = i + 1; j < len_m; j++)
        {
            if (m[i] > m[j])
            {
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }
    printf("Result: %s", m);

    return 0;
}