#include <stdio.h>
#include <conio.h>

int main()
{
    int m[3][2] = {1, 2, 3, 4, 5, 6};
    int d;
    scanf("%d", &d);
    for (int i = 0; i < 3 /* 2 */; i++)
    {
        printf(" \n");
        for (int j = 0; j < 3 /* 3  by col*/; j++)
        {
            printf(" %3d ", m[i][j]);
        }
        printf(" \n");
    }

    return 0;
}