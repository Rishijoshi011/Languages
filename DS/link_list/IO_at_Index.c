#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void travarsal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int insert_at_Index(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int delete_at_Index(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
     for (int i = 0; i < index - 1; i++)
     {
         p = p->next;
         q = q->next;
     }
     p->next = q->next;
     free(q);
     return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 14;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = fifth;

    fifth->data = 16;
    fifth->next = NULL;

      head = insert_at_Index(head, 26, 1);
    //head = delete_at_Index(head,1);
    travarsal(head);
    return 0;
}