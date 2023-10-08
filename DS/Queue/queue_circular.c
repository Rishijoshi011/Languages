#include <stdio.h>
#include <conio.h>

int q[20], front = -1, rear = -1, n, choice, x, i = 0;
void enqueue()
{
    if ((front == 0 && rear == n - 1) || front == rear + 1)
    {
        printf("\nQueue is full\n");
        return 0;
    }
    if (front == -1)
    {
        printf("Enter element to insert"); 
        scanf("%d", &x);
        front = 0, rear = 0;
        q[rear] = x;
    }
    else if (rear == n - 1)
    {
        printf("Enter element to insert");
        scanf("%d", &x);
        rear = 0;
        q[rear] = x;
    }
    else
    {
        printf("Enter element to insert");
        scanf("%d", &x);
        rear++;
        q[rear] = x;
        return 0;
    }
}
void dequeue()
{
    if (rear == -1)
    {
        printf("\nQueue is empty\n");
    }
    if (rear == front)
    {
        x = q[front];
        printf("deleted element is %d \n", x);
        rear = -1, front = -1;
    }
    else if (front == n - 1)
    {
        front = 0;
        x = q[front];
        printf("deleted element is %d \n", x);
    }
    else
    {
        x = q[front];
        printf("deleted element is %d \n", x);
        front++;
    }
}
void display()
{
    if (rear == -1)
    {
        printf("\nQueue is empty\n");
    }
    if (front < rear)
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", q[i]);
        }
    }
    else
    {
        for (i = front; i <= n - 1; i++)
        {
            printf("%d\n", q[i]);
        }
        for (i = 0; i <= rear; i++)
        {
            printf("%d\n", q[i]);
        }
    }
}
int main()
{
    printf("Enter size of array");
    scanf("%d", &n);
    do
    {
        printf("\n\t 1 for insert \n\t 2 for delete \n\t 3 for display \n\t 4 for exit\n");
        printf("\nEnter choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nWork Accomplished");
            break;
        default:
            printf("\nInvalid operation\n");
            break;
        }
    } while (choice != 4);

    return 0;
}