#include <stdio.h>
#include <conio.h>

void Insertion_sort(int *m, int size)
{
    int key, j;

    for (int i = 0; i <= size - 1; i++) // Loop for passes
    {
        key = m[i];
        // key means ke that element which i wont to insert in array
        j = i - 1;

        while (j >= 0 && m[j] > key) // Loop for each pass
        {

            m[j + 1] = m[j];
            j--;
        }
        m[j + 1] = key;
    }
}

void Display(int *m, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("value of a[%d] is : %d\n", i, m[i]);
    }
}

int main()
{
    int m[50], size;

    printf("Enter the size of an array\n");
    scanf("%d", &size);
    
    printf("Enter the element of an array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &m[i]);
    }
    printf("Before sorting array is\n");
    Display(m, size);
    
    Insertion_sort(m, size);
    
    printf("After soring array is\n");
    Display(m, size);

    return 0;
}

// summery
// dryrun

// -1   0    1   2   3   4   5
//      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
//      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

//      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
//      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

//      12, 54, 65,| 07, 23, 09 2--> i=3, key=7, j=2
//      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
//      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
//      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
//      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

// Fast forwarding and 4th and 5th pass will give:
//      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
//      07, 12, 23, 54,| 65, 09 --> After the 4th pass

//      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
//      07, 09, 12, 23, 54, 65| --> After the 5th pass
