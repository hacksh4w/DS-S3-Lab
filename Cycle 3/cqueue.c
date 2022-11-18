#include <stdio.h>
#include <stdlib.h>
#define size 5

int cqueue[size];
int front = -1, rear = -1;

int isEmpty()
{
	return(front == -1);
}

// Push function to insert element
void push(int item)
{
    if( (front == 0 && rear == size - 1) ||
    	(rear == front-1)
		)
        printf("\n Queue overflow");
    else if(front == -1)
    {
    	front = 0;
    	rear  = 0;
    	cqueue[rear] = item;
    }
    else
    {
    	rear = ++rear%size;
	cqueue[rear] = item;
    }
}

// Pop function to pop item
void pop()
{
    int del;
    if (front == -1)
        printf("\n Queue empty");
    else if(front == rear)
    {
    	printf("\nDeleted: %d", cqueue[front]);
    	front = -1;
    	rear  = -1;
    }
    else
    {
    	del = cqueue[front];
        printf("\nDeleted: %d", del);
        front = ++front%size;
    }
}


// Displays front item without popping it
int peek()
{
	if(front == -1)
		printf("\n Queue empty");
	else
		printf("\n Front: %d", cqueue[front]);
}


// To print items of cqueue
void display()
{
    if (front== -1)
        printf("\n Queue empty");
    else if(front <= rear)
    {
        printf("\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d, ", cqueue[i]);
        }
    }
    else
    {
    	for(int i=front; i<size; i++)
    		 printf("%d, ", cqueue[i]);
	for(int i=0; i<=rear; i++)
		 printf("%d, ", cqueue[i]);
    }
}

int main()
{
    int ch, element;
    do
    {
        printf("\n\nChoose operation");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display Queue");
        printf("\n4.Display Front Element");
        printf("\n5.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter element to insert ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
			peek();
            break;
        }
    } while (ch < 5);

    return 0;
}
