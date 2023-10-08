#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char m[20], b[20], mb[50];
    int i = 0, j = 0;

    printf("Enter your name \n");
    gets(m);

    printf("Enter your surname \n");
    gets(b);

    while (m[i] != NULL)
    {
        mb[j] = m[i];
        i++, j++;
    }

    i = 0;
    while (b[i] != NULL)
    {
        mb[j] = b[i];
        i++, j++;
    }
    mb[j] = NULL;

    printf(" \n Concatination :  %s", mb);
    printf(" \n m :%7s", m);
    printf(" \n b :%7s", b);
    return 0;
}