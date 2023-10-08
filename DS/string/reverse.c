#include <stdio.h>
#include <conio.h>

int main()
{
    char m[20];
    int i = 0, j = 0, len = 0;

    printf("Enter your name \n");
    gets(m);

    for (i = 0; m[i] != '\0'; i++);
    
    len = i;
    printf("Length of string is %d \n", len);

    for (i = 0; i < len / 2; i++)
    {
        int temp;
        temp = m[i];
        m[i] = m[len - i - 1];
        m[len - i - 1] = temp;
    }
    puts(m);
}