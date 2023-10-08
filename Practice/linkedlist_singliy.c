#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *Create()
{
    struct node *p = NULL, *head = NULL;
    int x, size;

    printf("Enter the size of the Linked List \n");
    scanf("%d", &size);

    printf("Enter the elements for the Linked List \n");
    scanf("%d", &x);

    head = (struct node *)malloc(sizeof(struct node));
    p = head;
    p->data = x;

    for (int i = 1; i < size; i++)
    {
        printf("Enter the element fot the Linked List \n");
        scanf("%d", &x);

        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
        p->data = x;
    }
    p->next = NULL;

    return head;
};

int Display(struct node *head)
{
    struct node *q = NULL;
    if (head == NULL)
    {
        printf("\n LINKED LIST IS EMPTY \n");
    }
    else
    {
        for (q = head; q != NULL; q = q->next)
        {
            printf("Value is %d \n", q->data);
        }
    }
    return 0;
}

struct node *Insert_at_First(struct node *head)
{
    struct node *p = NULL;
    int x;

    p = head;

    printf("Enter the element for the Linked List \n");
    scanf("%d", &x);

    p = (struct node *)malloc(sizeof(struct node));
    p->next = head;
    p->data = x;
    head = p;

    return head;
}

struct node *Insert_at_Last(struct node *head)
{
    struct node *p = NULL, *q = NULL;
    int x;

    p = head;
    q = head;

    printf("Enter element for the Linked List \n");
    scanf("%d", &x);

    p = (struct node *)malloc(sizeof(struct node));
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

struct node *Insert_at_Specific(struct node *head)
{
    struct node *p = NULL, *q = NULL;
    int x, position, i = 1;

    p = head;
    q = head;

    printf("Enter the location to insert the node in Linked List \n");
    scanf("%d", &position);

    printf("Enter the element for the Linked List \n");
    scanf("%d", &x);

    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->next = NULL;

    if (position == 1)
    {
        p->next = head;
        head = p;
    }
    else
    {
        for (q = head; (q->next != NULL) && (i < position - 1); q = q->next, i++)
        {
        }

        if (q == NULL)
        {
            printf("ENTER VALID POSITION \n");
        }
        else
        {
            p->next = q->next;
            q->next = p;
        }
    }

    return head;
}

struct node *Insert_sorted_nodes(struct node *head)
{
    struct node *p = NULL, *q = NULL;
    int x, i = 1;

    p = head;
    q = head;

    printf("Enter element for the Linked List \n");
    scanf("%d", &x);

    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->next = NULL;

    if ((head == NULL) || (x < head->next->data))
    {
        p->next = head;
        head = p;
    }
    else
    {
        for (q = head; (q->next != NULL) && (q->next->data < x); q = q->next)
        {
        }
        p->next = q->next;
        q->next = p;
    }

    return head;
}

struct node *Delete_at_First(struct node *head)
{
    struct node *p = NULL;
    int x;

    p = head;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY");
    }
    else
    {
        x = p->data;
        printf("%d is deleted from Linked List", x);

        head = p->next;
    }

    free(p);
    return head;
}

struct node *Delete_at_Last(struct node *head)
{
    struct node *p = NULL, *q = NULL;
    int x;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY \n");
    }
    else
    {
        if (head->next == NULL)
        {
            x = head->data;
            printf("%d is deleted from Linked List \n", x);

            p = head;
            head = NULL;
        }
        else
        {
            for (q = head; q->next->next != NULL; q = q->next)
            {
            }

            x = q->next->data;
            printf("%d is deleted from Linked List \n", x);

            p = q->next;
            q->next = NULL;
        }
    }

    free(p);
    return head;
}

struct node *Delete_at_Specific(struct node *head)
{
    struct node *p = NULL, *q = NULL;
    int x, position, i = 1;

    p = head;
    q = head;

    if (head == NULL)
    {
        printf("LINKED LIST IS EMPTY \n");
    }
    else
    {
        printf("Enter position to delete node in Linked List \n");
        scanf("%d", &position);

        if (position == 1)
        {
            x = head->data;
            printf("%d is deleted from Linked List \n", x);
            p = head;
            head = p->next;
        }
        else
        {
            for (q = head; (q->next != NULL) && (i < position - 1); q = q->next, i++)
            {
            }

            if (q->next == NULL)
            {
                printf("ENTER VALID POSITION \n");
            }
            else
            {
                x = q->next->data;
                printf("%d is deleted from Linked List \n", x);

                p = q->next;
                q->next = p->next;
            }
        }
    }

    free(p);
    return head;
}

struct node *Delete_by_number(struct node *head)
{
    struct node *p = NULL, *q = NULL;
    int x;

    p = head;
    q = head;

    if (head == NULL)
    {
        printf("\n LINKED LIST IS EMPTY \n");
    }
    else
    {
        printf("Enter number to delete from Linked List \n");
        scanf("%d", &x);

        if (head->data == x)
        {
            printf("%d is deleted from Linked List \n", x);

            p = head;
            head = p->next;
        }
        else if (head->next == NULL)
        {
            printf("ELEMENT IS NOT FOUND IN LINKED LIST \n");
        }
        else
        {
            for (q = head; (q->next != NULL) && (q->next->data != x); q = q->next)
            {
            }

            if (q->next->data == x)
            {
                printf("%d is deleted from Linked List \n", x);

                p = q->next;
                q->next = p->next;
            }
            else
            {
                printf("ELEMENT NOT FOUND IN LINKED LIST \n");
            }
        }
    }

    free(p);
    return head;
}

struct node *To_count_nodes(struct node *head)
{
    struct node *q = NULL;
    int i = 0;

    q = head;

    if (head == NULL)
    {
        printf("\n LINKED LIST IS EMPTY \n");
    }
    else
    {
        for (q = head; q != NULL; q = q->next, i++)
        {
        }
        printf("\n Total No. of nodes in Linked list is %d \n", i);
    }

    return head;
}

struct node *To_find_node(struct node *head)
{
    struct node *p = NULL, *q = NULL;
    int x, i = 1, flag = 0;

    if (head == NULL)
    {
        printf("\n LINKED LIST IS EMPTY \n");
    }
    else
    {
        printf("Enter element to find node in Linked List \n");
        scanf("%d", &x);

        for (q = head; q != NULL; q = q->next, i++)
        {
            if (q->data == x)
            {
                printf("%d is located at location %d \n", x, i);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("\n ELEMENT IS NOT FOUND IN LINKED LIST \n");
        }
    }

    return head;
}

int main()
{
    struct node *head = NULL;
    int choice;

    do
    {
        printf("\n\t1.Create \n\t");
        printf("2.Display \n\t");
        printf("3.Exit \n\t");
        printf("4.Insert at Frist \n\t");
        printf("5.Insert at Last \n\t");
        printf("6.Insert at Specific Position \n\t");
        printf("7.Insert in sorted manner \n\t");
        printf("8.Delete at First \n\t");
        printf("9.Delete at Last \n\t");
        printf("10.Delete at Specific Position \n\t");
        printf("11.Delete by Number \n\t");
        printf("12.To count No. nodes \n\t");
        printf("13.To find node \n\t");

        printf("\n Enter the choice: \n");
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
            printf("\n TERMINATED \n");
            return 0;

        case 4:
            head = Insert_at_First(head);
            break;

        case 5:
            head = Insert_at_Last(head);
            break;

        case 6:
            head = Insert_at_Specific(head);
            break;

        case 7:
            head = Insert_sorted_nodes(head);
            break;

        case 8:
            head = Delete_at_First(head);
            break;

        case 9:
            head = Delete_at_Last(head);
            break;

        case 10:
            head = Delete_at_Specific(head);
            break;

        case 11:
            head = Delete_by_number(head);
            break;

        case 12:
            head = To_count_nodes(head);
            break;

        case 13:
            head = To_find_node(head);
            break;

        default:
            printf("\n ENTER VALID OPERATION \n");
            break;
        }
    } while (choice != 3);

    return 0;
}