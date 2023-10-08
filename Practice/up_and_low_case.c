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
    
    // lower
    
    len_m = strlen(m);
    for (int i = 0; i < len_m; i++)
    {
        if ((m[i] > 'A') && (m[i] < 'Z'))
        {
            m[i] += 32;
        }
    }

    //  upper
    
    // for (int i = 0; i < len_m; i++)
    // {
    //     if ((m[i] > 'a') && (m[i] < 'z'))
    //     {
    //         m[i] -= 32;
    //     }
    // }

    printf("Result: %s", m);
    return 0;
}