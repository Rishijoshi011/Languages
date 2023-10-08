#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

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
    p->next = NULL;

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

struct Node *insert_at_first(struct Node *head)
{
    struct Node *p = NULL;
    int x;

    p = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter element to insert");
    scanf("%d", &x);

    p->data = x;
    p->next = head;
    head = p;

    return head;
}

struct Node *insert_at_last(struct Node *head)
{
    struct Node *q = NULL, *p = NULL;
    int x;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY\n");
    }

    p = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter element to insert");
    scanf("%d", &x);

    p->data = x;
    p->next = NULL;

    if (head == NULL)
    {
        head = p;
    }
    else
    {
        for (q = head; q->next != NULL; q = q->next)
        {
        }
        q->next = p;
    }

    return head;
}

struct Node *insert_at_specific(struct Node *head)
{
    struct Node *p, *q;
    int x, location, i = 1;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY");
    }
    else
    {
        p = head;
        p = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter Location");
        scanf("%d", &location);

        printf("Enter value to insert");
        scanf("%d", &x);

        p->data = x;
        p->next = NULL;

        q = head;

        if (location == 1)
        {
            p->next = head;
            head = p;
        }
        else
        {
            while ((q->next != NULL) && (i < location - 1))
            {
                q = q->next;
                i++;
            }
            if (q == NULL)
            {
                printf("ENTER VALID LOCATION OF NODE");
            }
            else
            {

                p->next = q->next;
                q->next = p;
            }
        }
    }

    return head;
}

struct Node *insert_sorted_nodes(struct Node *head)
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
        p = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter element to insert");
        scanf("%d", &x);

        p->data = x;
        p->next = NULL;

        if ((head == NULL) && (x < head->data))
        {
            p->next = head;
            head = p;
        }
        else
        {
            while ((q->next != NULL) && (x > q->next->data))
            {
                q = q->next;
            }
            p->next = q->next;
            q->next = p;
        }
    }

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

        while (q->next != NULL)
        {
            q = q->next;
            i++;

            if (q->data == x)
            {
                printf("Your node is found at location: %d", i);
            }
            else
            {
                printf("NUMBER IS'T FOUND IN LINKED LIST");
            }
        }
    }

    return head;
}

struct Node *delete_number(struct Node *head)
{
    struct Node *q = NULL, *p = NULL;
    int x;

    q = head;
    p = head;

    if (head == NULL)
    {
        printf("Link list is Empty\n");
        return head;
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
        printf("\n\t 1.Create \n\t 2.Display \n\t 3.Exit \n\t 4.Insert at first \n\t 5.Insert at last");
        printf("\n\t 6.Insert at Specific Location \n\t 7.Sorted insert \n\t 8.To count number of Nodes");
        printf(" \n\t 9.Find location of node \n\t 10.Delete Number \n\t");
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

        case 4:
            head = insert_at_first(head);
            break;

        case 5:
            head = insert_at_last(head);
            break;

        case 6:
            head = insert_at_specific(head);
            break;

        case 7:
            head = insert_sorted_nodes(head);
            break;

        case 8:
            head = to_count_nodes(head);
            break;

        case 9:
            head = find_nodes(head);
            break;

        case 10:
            head = delete_number(head);
            break;

        default:
            printf("\n\t INVALID CHOICE");
            break;
        }
    } while (choice != 3);

    return 0;
}