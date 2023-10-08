#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *Left;
    struct Node *right;
};

struct Node *CreateNode(int element)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = element;
    n->Left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct Node *root)
{
    if (root != NULL)
    {

        printf("%d\n", root->data);
        preOrder(root->Left);
        preOrder(root->right);
    }
}

void postOrder(struct Node *root)
{

    if (root != NULL)
    {
        postOrder(root->Left);
        postOrder(root->right);
        printf("%d\n", root->data);
    }
}

void inOrder(struct Node *root)
{

    if (root != NULL)
    {
        inOrder(root->Left);
        printf("%d\n", root->data);
        inOrder(root->right);
    }
}

int main()
{
    int choice;
    struct Node *p = CreateNode(4);
    struct Node *p1 = CreateNode(1);
    struct Node *p2 = CreateNode(6);
    struct Node *p3 = CreateNode(5);
    struct Node *p4 = CreateNode(2);

    p->Left = p1;
    p->right = p2;
    p1->Left = p3;
    p1->right = p4;
    do
    {
        printf("Enter 1 for preOrder\n");
        printf("Enter 2 for postOrder\n");
        printf("Enter 3 for inOrder\n");
        printf("Enter 4 for EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n preOrder \n");
            preOrder(p);
            break;
        case 2:
            printf("\n postOrder\n");
            postOrder(p);
            break;
        case 3:
            printf("\n inOrder\n");
            inOrder(p);
            break;
        case 4:
            printf("EXITED...\n");
            return;
            break;

        default:
            printf("Error:---------------------\n");
            break;
        }
    } while (choice != 4);

    return 0;
}