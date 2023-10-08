#include <stdio.h>
#include <string.h>
void pali(char [], int);
int main()
{
    char m[15];
    printf("Enter a word to check if it is a palindrome\n");
    scanf("%s", m);
    pali(m, 0);
}
 
void pali(char m[], int b)
{
    int len=strlen(m) - (b + 1);
    if (m[b]==m[len])
    {
        if (b+1==len||b==len)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        pali(m,b+1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}
