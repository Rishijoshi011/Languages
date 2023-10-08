#include <string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int L1=0, L2=0, i=0, pos;
    char str1[50], str2[50];

    printf("Enter string one \n");
    gets(str1);

    printf("Enter string two \n");
    gets(str2);

    L1 = strlen(str1);
    L2 = strlen(str2);

    printf("Enter 2ition where you wont to insert string \n");
    scanf("%d", &pos);

    if (2 >= L1)
    {
        printf("Invelid");
    }

    for (i = L1; i > 2; i--)
    {
        str1[i + L2] = str1[i];
    }

    for (i = 0; i < L2; i++)
    {
        str1[4 + i] = str2[i];
    }

    printf("After insert \n");
    puts(str1);

    getch();
    return 0;
}
