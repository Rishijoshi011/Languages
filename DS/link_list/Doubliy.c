#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
};

struct Node *Create()
{
    struct Node *p = NULL, *head = NULL, *q = head;
    int x, size;

    printf("Enter size of nodes to create \n");
    scanf("%d", &size);

    printf("Enter element to insert in Node \n");
    scanf("%d", &x);

    head = (struct Node *)malloc(sizeof(struct Node));
    p = head;
    q = head;
    p->data = x;
    p->next = NULL;
    p->previous = NULL;

    for (int i = 1; i < size; i++)
    {

        printf("Enter element to insert in Node \n");
        scanf("%d", &x);

        p->next = (struct Node *)malloc(sizeof(struct Node));
        q = p->next;
        q->previous = p;
        p = p->next;
        p->data = x;
    }
    p->next = NULL;

    return head;
}

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

int Display_reverse(struct Node *head)
{
    struct Node *p = NULL;
    p = head;
    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY \n");
    }

    while (p != NULL)
    {
        if (p->next == NULL)
        {
            printf("values : %d\n", p->data);
            break;
        }
        p = p->next;
    }
    while (p != head)
    {
        p = p->previous;
        printf("values : %d\n", p->data);
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

struct Node *sorted_insert(struct Node *head)
{
    struct Node *p = NULL, *q = NULL;
    int x;

    p = head;
    q = head;

    p = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value to insert in Doubliy Linked List \n");
    scanf("%d", &x);
    p->data = x;

    if ((head == NULL) || (x < head->data))
    {
        p->next = head;
        head = p;
        head->next->previous = p;
    }
    else
    {
        while ((q->next != NULL) && (x > q->next->data))
        {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
        q->next->previous = p->previous;
    }

    return head;
}

struct Node *delete_at_first(struct Node *head)
{
    struct Node *p = NULL;
    int x;

    p = head;

    if (head == NULL)
    {
        printf("DOUBLY LINKED LIST IS EMPTY");
    }
    else
    {
        x = p->data;
        printf("\n%d is deleted from doubly Linked List \n", x);

        head = p->next;
        p->next->previous = NULL;

        free(p);
        return head;
    }
}

struct Node *delete_at_last(struct Node *head)
{
    struct Node *p = NULL, *q = NULL;
    int x;

    p = head;
    q = head;

    if (head == NULL)
    {
        printf("DOUBLY LINKED LIST IS EMPTY");
    }
    else
    {
        if (head->next == NULL)
        {
            x = head->data;
            printf("%d is deleted from Linked List\n", x);

            p = head;
            head = NULL;

            free(p);
            return head;
        }
        else
        {
            while (q->next->next != NULL)
            {
                q = q->next;
            }
            x = q->next->data;
            printf("\n %d is deleted from Linked List \n", x);

            p = q->next;
            q->next = NULL;

            free(p);
            return head;
        }
    }
}

struct Node *delete_at_specific(struct Node *head)
{
    struct Node *p = NULL, *q = NULL;
    int x, location, i = 1;

    p = head;
    q = head;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY");
    }
    else
    {
        printf("Enter location to insert Node \n");
        scanf("%d", &location);

        if (location == 1)
        {
            x = head->data;
            printf("%d is deleted from doubliy Linked List \n", x);

            head = p->next;
            p->next->previous = NULL;
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
                printf("ENTER VALID LOCATION OF NODE \n");
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

        if (head->data == x)
        {
            printf("%d is deleted from Linked List\n", head->data);
            p = head;
            head = p->next;

            if (head != NULL)
            {
                head->previous = NULL;
            }

            free(p);
            return head;
        }
        else if (head->next == NULL)
        {
            printf("ELEMENT NOT FOUND IN DOUBLIY LINKED LIST");
        }
        else
        {
            while ((q->next->data != x) && (q->next->next != NULL))
            {
                q = q->next;
            }
            if (q->next->data == x)
            {
                p = q->next;
                q->next = p->next;

                if (q->next != NULL)
                {
                    q->next->previous = q;
                }
            }
            else
            {
                printf("ELEMENT NOT FOUND IN DOUBLIY LINKED LIST");
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
        printf("\n\t 1.Create");
        printf("\n\t 2.Display from start");
        printf("\n\t 3.Display from Last");
        printf("\n\t 4.Exit");
        printf("\n\t 5.Insert at First");
        printf("\n\t 6.Insert at Last");
        printf("\n\t 7.Insert at Specific Location");
        printf("\n\t 8.Sorted Insert");
        printf("\n\t 9.Delete at First");
        printf("\n\t 10.Delete at Last");
        printf("\n\t 11.Delete at Specific Location");
        printf("\n\t 12.Delete by number");
        printf("\n\t 13.To count number of Nodes");
        printf("\n\t 14.To find node \n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            head = Create();
            break;

        case 2:
            Display_start(head);
            break;

        case 3:
            Display_reverse(head);
            break;

        case 4:
            exit(0);
            break;

        case 5:
            head = insert_at_first(head);
            break;

        case 6:
            head = insert_at_last(head);
            break;

        case 7:
            head = insert_at_specific(head);
            break;

        case 8:
            head = sorted_insert(head);
            break;

        case 9:
            head = delete_at_first(head);
            break;

        case 10:
            head = delete_at_last(head);
            break;

        case 11:
            head = delete_at_specific(head);
            break;

        case 12:
            head = delete_number(head);
            break;

        case 13:
            head = to_count_nodes(head);
            break;

        case 14:
            head = find_nodes(head);
            break;

        default:
            printf("INVALID CHOICE");
            break;
        }

    } while (choice != 4);
}