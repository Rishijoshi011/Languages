#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}

struct Node *Create()
{
    struct Node *p = NULL, *head = NULL;
    int x, n;

    printf("Enter the size of an Linked list\n");
    scanf("%d", &n);

    printf("Enter the element you want to insert:\n");
    scanf("%d", &x);

    head = (struct Node *)malloc(sizeof(struct Node));
    p = head;
    p->data = x;

    for (int i = 1; i < n; i++)
    {
        printf("Enter the element you want to insert:\n");
        scanf("%d", &x);

        p->next = (struct Node *)malloc(sizeof(struct Node));
        p = p->next;
        p->data = x;
    }
    p->next = NULL;

    return head;
}

int Display(struct Node *head)
{
    struct Node *q;

    q = head;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY\n");
        return 0;
    }
    else
    {
        for (q = head; q != NULL; q = q->next)
        {
            printf("value is %d\n", q->data);
        }
    }

    return 0;
}

struct Node *delete_number(struct Node *head)
{
    struct Node *q = NULL, *p = NULL;
    int x;

    q = head;
    p = head;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY\n");
    }
    else
    {
        printf("Enter element to delete node\n");
        scanf("%d", &x);

        if (x == q->data)
        {
            head = p->next;
            printf("%d is deleted from Linked List\n", q->data);

            free(p);
            return head;
        }
        if (q == NULL)
        {
             if (x == head->data)
             {
                head = NULL; 
             }
              printf("NODE IS NOT HERE");
        }
        

        while ((x != q->next->data) && (q != NULL))
        {
            q = q->next;
        }

        if (q == NULL)
        {
            printf("ELEMENT IS NOT FOUND IN LINKED LIST\n");

            free(p);
            return head;
        }
        printf("%d is deleted from Linked List\n", q->next->data);

        p = q->next;
        q->next = p->next;
    }

    free(p);
    return head;
}

int main()
{
    struct Node *head = NULL;
    int choice;

    do
    {
        printf("\n\t 1.Create");
        printf("\n\t 2.Display");
        printf("\n\t 3.Exit");
        printf("\n\t 11.Delete by Element");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            head = Create();
            break;

        case 2:
            Display(head);
            break;

        case 3:
            exit(0);
            break;

        case 11:
            head = delete_number(head);
            break;

        default:
            printf("\n\t INVALID CHOICE");
            break;
        }
    } while (choice != 3);

    return 0;
}