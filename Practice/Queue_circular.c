#include <stdio.h>
#include <conio.h>

int m[50], front = -1, rear = -1, choice, size, x;

void enqueue()
{
    if ((rear == size - 1 && front == 0) || (front == rear + 1))
    {
        printf("Circular Queue is overflow\n");
    }
    else if (front == -1)
    {
        printf("Enter element to insert in Circular Queue \n");
        scanf("%d", &x);

        front = 0, rear = 0;
        m[rear] = x;
    }
    else if (rear == size - 1)
    {
        printf("Enter element to insert in Circular Queue \n");
        scanf("%d", &x);

        rear = 0;
        m[rear] = x;
    }
    else
    {
        printf("Enter element to insert in Circular Queue \n");
        scanf("%d", &x);

        rear++;
        m[rear] = x;
    }
}

void dequeue()
{
    if (rear == -1)
    {
        printf("Circular Queue is underflow \n");
    }
    else if (front == rear)
    {
        x = m[front];
        printf("%d is deleted from Circular Queue \n", x);

        front = -1, rear = -1;
    }
    else if (front == size - 1)
    {
        x = m[front];
        printf("%d is deleted from Circular Queue \n", x);

        front = 0;
    }
    else
    {
        x = m[front];
        printf("%d is deleted from Circular Queue \n", x);

        front++;
    }
}

void display()
{
    if (rear == -1)
    {
        printf("Circular Queue is underflow \n");
    }
    else if (front < rear)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("Value is: %d\n", m[i]);
        }
    }
    else
    {
        for (int i = front; i < size - 1; i++)
        {
            printf("Value is: %d\n", m[i]);
        }
        for (int i = 0; i <= rear; i++)
        {
            printf("Value is: %d \n", m[i]);
        }
    }
}

int main()
{
    printf("Enter size of Circular Queue \n");
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
            printf("Work completed. Now fuck off");
            break;

        default:
            printf("Enter valid operation \n");
            break;
        }
    } while (choice != 4);

    return 0;
}