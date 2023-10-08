#include <stdio.h>
#include <conio.h>

int stack[20], top, choice, x, n, i;
void push() // push ni condition
{
	if (top >= n - 1)
	{
		printf("\n\tStack is overflow");
	}
	else
	{
		printf("\n\tEnter a value to be pushed");
		scanf("%d", &x);
		top++;
		stack[top] = x;
	}
}
void pop() // pop ni condition
{
	if (top <= -1)
	{
		printf("\n\tStack is underflow");
	}
	else
	{
		printf("\n\tcopied values %d", stack[top]);
		top--;
	}
}
void display()
{
	if (top >= 0)
	{
		printf("\n\tElements in stack");
		for (i = top; i >= 0; i--)
		{
			printf("%7d", stack[i]);
		}
	}
	else
	{
		printf("\n\tThe stack is ending");
	}
}
int main()
{
	system("COLOR 0B");
	top = -1;
	printf("\n\tEnter size of stack");
	scanf("%d", &n);
	printf("\n\t Enter 1 for push \n\t 2 for pop \n\t 3 for display \n\t 4 for exit");
	do
	{
		printf("\n\tEnter choice");
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
			printf("\n\tExit");
			exit(0);
			break;
		default:
			printf("\n\tInvalid");
			break;
		}
	} while (choice != 4);
}
