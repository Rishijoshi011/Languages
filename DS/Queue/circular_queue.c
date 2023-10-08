#include <stdio.h>
#include <conio.h>

int q[50], f = -1, r = -1, n, choice, x;
int i = 0;
int Enqueue(void);
int Dequeue(void);
int Display(void);

int main()
{
    printf("Enter the size of an array: \n");
    scanf("%d", &n);
    do
    {
        printf("\n 1. Insert \n 2. Delete \n 3. Disply \n 4. EXIT \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue();
            break;

        case 2:
            Dequeue();
            break;

        case 3:
            Display();
            break;

        case 4:
            printf("EXIT POINT\n");
            return 0;
            break;

        default:
            printf("Enter a valid choice\n");
            break;
        }

    } while (choice != 4);

    return 0;
}
int Enqueue() //insert
{
    // fflush(stdin);
    if ((f == 0 && r == n - 1) || (f == r + 1))
    {
        printf("Queue is Full\n");
        return 0;
    }
    if (f == -1)
    {
        printf("Enter element you wont to insert\n");
        scanf("%d", &x);
        f = 0, r = 0;
        q[r] = x;
    }
    else if (r == n - 1)
    {
        printf("Enter element you wont to insert\n");
        scanf("%d", &x);
        r = 0;
        q[r] = x;
    }
    else
    {
        printf("Enter element you wont to insert\n");
        scanf("%d", &x);
        r = r + 1;
        q[r] = x;
        return 0;
    }
    return 0;
}
int Dequeue() //Delete
{
    if (r == -1)
    {
        printf("queue is Empty \n");
        return 0;
    }

    if (r == f)
    {
        x = q[f];
        printf("%d is Deleted ", x);
        r = -1, f = -1;
    }
    else if (f == n - 1)
    {
        f = 0;
        x = q[f];
        printf("%d is Deleted ", x);
    }
    else
    {
        x = q[f];
        printf("%d is Deleted ", x);
        f = f + 1;
    }
    return 0;
}
int Display()
{
    if (r == -1)
    {
        printf("queue is Empty \n");
        return 0;
    }
    if (f < r)
    {
        for (i = f; i <= r; i++)
        {
            printf("%d", q[i]);
        }
        return 0;
    }
    else
    {
        for (i = f; i <= n - 1; i++)
        {
            printf("%d", q[i]);
        }
        for(i=0;i<=r;i++)
        {
            printf("\n %d",q[i]);
        }
    }
    return 0;
}