#include <stdio.h>
#include <stdlib.h>
#define size 25

int queue[size];
int rear = -1;
int front = -1;

int isEmpty() {
	if (front ==-1 && rear ==-1) return 1;
	else return 0;	
}

int isFull(){
	if (rear == size -1){
		return 1; 
		front = -1; 
		rear = -1;
		}
	else
		return 0;
	}

int isFirst(){
	if (front ==-1){
	return 1;
	}
}
int dequeue(int item) {
	item = queue[++front];
	return (item);
}

void enqueue(int item){
	if (isFirst()){
		front = 0; 
		queue[++rear] = item;
	}
	else {
		 rear= rear + 1;
		 queue[rear] = item;
	}	
		}
	
void display(){
	int i;
	if (isEmpty())
	printf("\nStack Is Empty!\n");
	else {
		for (i = rear; i >= 0; i--)
			printf("\n %d", queue[i]);
			}
	}

	
int main (){
	int item,ch; 
	do {
		printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit Loop\n");
		printf("\n Enter Option : ");
		scanf("%d", &ch);
	
	switch (ch) {
		case 1:
			printf("\nEnter The item to be pushed :: ");
			scanf("%d", &item);

			if (isFull())
				printf("\nQueue is Full!");
			else if (isFirst()) ;
			else {
				enqueue(item);
			break;}
		case 2:
			if (isEmpty())
				printf("\nEmpty Queue!Underflow !!");
			else {
				dequeque(item);
				printf("\nThe popped element is %d", item);
			}
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		}
	} 
	while (1);
		return 0;
} 
