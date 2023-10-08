#include <stdio.h>
#include <conio.h>

int m[50], size, top = -1, x, choice;

void push()
{
    if (top >= size - 1)
    {
        printf("\n Stack is overflow \n");
    }
    else
    {
        printf("\n Enter value to push in stack \n");
        scanf("%d", &x);
        
        top++;
        m[top] = x;
    }
}

void pop()
{
    if (top < 0)
    {
        printf("Stack is underflow \n");
    }
    else
    {
        x = m[top];
        printf("%d is deleted from stack \n", x);
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%7d", m[i]);
        }
    }
    else
    {
        printf("Stack is underflow \n");
    }
}

int main()
{
    printf("Enter size of stack \n");
    scanf("%d", &size);

    do
    {
        printf("\n\t 1.PUSH \n\t 2.POP \n\t 3.Display \n\t 4.Exit \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Task complete \n");
            return 0;

        default:
            printf("Enter valid operation \n");
            break;
        }
    } while (choice != 4);

    return 0;
}