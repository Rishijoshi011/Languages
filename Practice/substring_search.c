#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char m[50], sub[50];
    char temp[50];
    int i = 0, j = 0, len_m = 0, len_sub = 0, flag = 0;

    printf("Enter main String \n");
    gets(m);

    printf("Enter Sub String \n");
    fflush(stdin);
    gets(sub);

    len_m = strlen(m);
    len_sub = strlen(sub);

    for (int i = 0; i < len_m; i++)
    {
        for (int j = 0; j < len_sub; j++)
        {
            if (m[i + j] == sub[j])
            {
                flag = 1;
                printf("Found at location %d", i);
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("Not Found");
    }
    return 0;
}