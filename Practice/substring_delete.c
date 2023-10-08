#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char m[50], sub[50];
    char temp[50];
    int i = 0, j = 0, len_m = 0, num_to_delete, pos;

    printf("Enter main String \n");
    gets(m);

    printf("Enter postion \n");
    scanf("%d", &pos);

    if (pos > len_m)
    {
        printf("Invalid postion \n");
    }
    len_m = strlen(m);

    printf("Enter how many character you want to delete \n");
    scanf("%d", &num_to_delete);

    for (int i = pos + num_to_delete; i <= len_m; i++)
    {
        m[i - num_to_delete] = m[i];
    }

    printf("Result is here: %s", m);

    return 0;
}