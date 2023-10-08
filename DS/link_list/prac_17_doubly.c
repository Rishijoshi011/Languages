#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
};

int Display_start(struct Node *head)
{
    struct Node *q = NULL;

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

struct Node *insert_at_first(struct Node *head)
{
    struct Node *p = NULL;
    int x;

    p = head;

    printf("Enter element to insert in Node\n");
    scanf("%d", &x);

    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = x;
    p->next = head;
    p->previous = NULL;
    head = p;

    return head;
}

struct Node *insert_at_last(struct Node *head)
{
    struct Node *p = NULL, *q = NULL;
    int x;

    p = head;
    q = head;

    p = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter element to insert in Node \n");
    scanf("%d", &x);
    p->data = x;

    if (head == NULL)
    {
        p->next = head;
        p->previous = head;
        head = p;

        return head;
    }
    else
    {
        while (q->next != NULL)
        {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
        p->previous = q;

        return head;
    }
}

struct Node *insert_at_specific(struct Node *head)
{
    struct Node *p = NULL, *q = NULL;
    int x, location, i = 1;

    p = head;
    q = head;

    p = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter location to insert Node \n");
    scanf("%d", &location);

    if (location == 1)
    {
        printf("Enter element to insert in Node \n");
        scanf("%d", &x);
        p->data = x;

        p->next = head;
        p->previous = head;
        head = p;

        return head;
    }
    else
    {
        while ((i < location - 1) && (q->next != NULL))
        {
            q = q->next;
            i++;
        }

        if (q->next == NULL)
        {
            printf("INVALID LOCATION TO INSERT NODE");
        }
        else
        {
            printf("Enter element to insert in Node \n");
            scanf("%d", &x);
            p->data = x;

            p->next = q->next;
            q->next = p;
            p->previous = q;

            return head;
        }
    }
}

struct Node *delete_number(struct Node *head)
{
    struct Node *p = NULL, *q = NULL;
    int x;

    p = head;
    q = head;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY");
    }
    else
    {
        printf("Enter element to delete Node \n");
        scanf("%d", &x);

        if (x == q->data)
        {
            p->next = head;
            head = p;
            printf("%d is deleted from Linked List\n", q->data);

            free(p);
            return head;
        }
        else if (x != q->data)
        {
            printf("ELEMENT NOT FOUND IN DOUBLIY LINKED LIST");
        }
        else
        {
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
            else
            {
                x = q->next->data;
                printf("%d is deleted from doubliy Linked List \n", x);

                p = q->next;
                q->next = p->next;
                p->next->previous = q->previous;
            }
        }
    }

    free(p);
    return head;
}

struct Node *to_count_nodes(struct Node *head)
{
    struct Node *q = NULL;
    int i = 1;

    q = head;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY");
    }
    else
    {
        while (q->next != NULL)
        {
            q = q->next;
            i++;
        }
        printf("Total number of nodes are : %d ", i);
    }

    return head;
}

struct Node *find_nodes(struct Node *head)
{
    struct Node *q = NULL;
    int x, i = 1;

    q = head;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY");
    }
    else
    {
        printf("Enter element to find node");
        scanf("%d", &x);

        if (x == head->data)
        {
            printf("Your node is found at location: 1");
        }
        else if (x != head->data)
        {
            printf("NUMBER IS'T FOUND IN LINKED LIST");
        }
        else
        {
            while (q != NULL)
            {
                q = q->next;
                i++;

                if (q->data == x)
                {
                    printf("Your node is found at location: %d", i);
                    return head;
                }
            }
            if (q->data != x)
            {
                printf("NUMBER IS'T FOUND IN LINKED LIST");
            }
        }
    }

    return head;
}

int main()
{
    struct Node *head = NULL;
    int choice;

    do
    {
        printf("\n\t 1.Display from start");
        printf("\n\t 2.Exit");
        printf("\n\t 3.Insert at First");
        printf("\n\t 4.Insert at Last");
        printf("\n\t 5.Insert at Specific Location");
        printf("\n\t 6.Delete by number");
        printf("\n\t 7.To count number of Nodes");
        printf("\n\t 8.To find node");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Display_start(head);
            break;

        case 2:
            exit(0);
            break;

        case 3:
            head = insert_at_first(head);
            break;

        case 4:
            head = insert_at_last(head);
            break;

        case 5:
            head = insert_at_specific(head);
            break;

        case 6:
            head = delete_number(head);
            break;

        case 7:
            head = to_count_nodes(head);
            break;

        case 8:
            head = find_nodes(head);
            break;

        default:
            printf("INVALID CHOICE");
            break;
        }

    } while (choice != 2);
}