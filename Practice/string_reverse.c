#include <stdio.h>
#include <conio.h>

int main()
{
    char m[20], b[20];
    int i = 0, count = 0;

    printf("Enter your name \n");
    gets(m);

    while (m[i] != NULL)
    {
        count++;
        i++;
    }

    printf("Length of given string is: %d \n", count);

    count = i;
    i = 0;
    while (i < count / 2)
    {
        int temp = m[i];
        m[i] = m[count - i - 1];
        m[count - i - 1] = temp;
        i++;
    }

    printf("Reverse of string %s",m);

    return 0;
}