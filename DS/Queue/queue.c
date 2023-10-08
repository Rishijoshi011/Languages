#include<stdio.h>
#include<conio.h>

int q[50], f = -1, r = -1, n, choice, x;
int i = 0;
int Enqueue() 
{
    if (r == n - 1)
    {
        printf("Queue is over flow\n");
        return 0;
    }
    if (f == -1)
    {
        printf("Enter element you want to insert\n");
        scanf("%d", &x);
        f = 0, r = 0;
        q[r] = x;
    }
    else
    {
        printf("Enter element you want to insert\n");
        scanf("%d", &x);
        r = r + 1;
        q[r] = x;
    }
    return 0;
}
	int Dequeue() 
{
    if (r == -1)
    {
        printf("queue under flow \n");
        return 0;
    }

    if (r == f)
    {
        x = q[f];
        printf("%d is Deleted ", x);
        r = -1, f = -1;
    }
    else
    {
        x = q[f];
        printf("%d is Deleted ", x);
        f++;
    }
}
	int Display()
{
    if (r == -1)
    {
        printf("queue under flow \n");
        return 0;
    }
    for (i = f; i <= r; i++)
    {
        printf("\n%d", q[i]);
    }
}

	int main()
{
    system("COLOR 0B");
	printf("Enter the size of an array: \n");
    scanf("%d", &n);
    do
    {
        printf("\n\t 1. Insert \n\t 2. Delete \n\t 3. Disply \n\t 4. EXIT \n");
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
