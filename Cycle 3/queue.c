#include <stdio.h>
#include <stdlib.h>
#define size 25

int queue[size], front = -1, rear = -1;

// enqueue function to insert item
void enqueue(int item)
{
    if (rear == size - 1)
        printf("\n Queue overflow");
    else if(rear == -1)
    {
    	front = 0;
    	rear  = 0;
    	queue[rear] = item;
    }
    else
		queue[++rear] = item;
}

// dequeue function to dequeue item
void dequeue()
{
    int del;
    if (front == -1)
        printf("\nQueue empty");
    else if(front == rear)
    {
    	printf("\nDeleted: %d", queue[front]);
    	front = -1;
    	rear  = -1;
    }
    else
    {
        del = queue[front++];
        printf("\nDeleted: %d", del);
    }
}


// Displays front item without dequeueping it
int peek()
{
	if(front == -1)
		return -1;
	else
		return queue[front];
}


// To print items of queue
void display()
{
    if (front== -1)
        printf("\nQueue empty");
    else
    {
        printf("\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d, ", queue[i]);
        }
    }
}

int main()
{
    int ch, item;
    do
    {
        printf("\n\nChoose operation");
        printf("\n1.Enqueue");
        printf("\n2.Qequeue");
        printf("\n3.Display queue");
        printf("\n4.Display Front Element");
        printf("\n5.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter element to insert ");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
	        if(front == -1)
	        {
	        	printf("Queue Empty!");
	        }
	        else
	        {
                printf("Front element: %d", peek());
	        }
            break;
        }
    } while (ch < 5);

    return 0;
}
