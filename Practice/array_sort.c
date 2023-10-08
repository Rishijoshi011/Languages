#include <stdio.h>
#include <conio.h>

int main()
{
    int m[] = {150, 104, 13, 152, 91};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (m[i] < m[j])
            {
                int temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {

        printf("\n%d", m[i]);
    }

    return 0;
}