#include <stdio.h>
#include <conio.h>

int m[50], size, front = -1, rear = -1, choice, x;

void enqueue()
{
    if (rear == size - 1)
    {
        printf("Queue is Overflow \n");
    }
    else if (front == -1)
    {
        printf("Enter element to insert in Simple Queue \n");
        scanf("%d", &x);

        front = 0, rear = 0;
        m[rear] = x;
    }
    else
    {
        printf("Enter element to insert in Simple Queue \n");
        scanf("%d", &x);

        rear++;
        m[rear] = x;
    }
}

void dequeue()
{
    if (rear == -1)
    {
        printf("Queue is Underflow \n");
    }
    else if (front == rear)
    {
        x = m[front];
        printf("%d is deleted from the Queue");

        front = -1, rear = -1;
    }
    else
    {
        x = m[front];
        printf("%d is deleted from the Queue");
        front++;
    }
}

void display()
{
    if (rear == -1)
    {
        printf("Queue is Underflow \n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("m[%d] element of Queue is %d \n", i, m[i]);
        }
    }
}

int main()
{
    printf("Enter size of an Queue \n");
    scanf("%d", &size);

    do
    {
        printf("\n\t 1.Enqueue \n\t 2.Dequeue \n\t 3.Display \n\t 4.Exit \n");
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
            printf("Task complite. NOW FUCK OFF!! \n");
            return 0;

        default:
            printf("Enter valid operation \n");
            break;
        }
    } while (choice != 4);

    return 0;
}