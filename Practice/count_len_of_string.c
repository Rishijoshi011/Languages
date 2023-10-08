#include <stdio.h>
#include <conio.h>

int main()
{
    char m[20];
    int i = 0, count = 0;

    printf("Enter your name \n");
    gets(m);

    while (m[i] != NULL)
    {
        count++;
        i++;
    }

    printf("Length of given string is: %d", count);
    return 0;
}