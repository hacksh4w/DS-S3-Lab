#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node* next;
};

struct node* first = NULL;

struct node* createNode(int item){ //node* is the first element in struct node 
    struct node* newNode = (struct node*)malloc((sizeof(struct node)));
    if(newNode == NULL){
        printf("Error found\n");
        exit(0);
    }
    newNode->next = NULL;
    newNode->item = item;
    return(newNode);
}

void delete() {
if(first == NULL)
    {
        printf("\nList Empty");
    }
else {
	if () {
	
	}
	else {
	
	}
}

void display () {
temp = first;
	while(temp!= NULL){
		printf("%d",temp->item);	
	}
	printf("\n\n");
}
void insertBegin() {
	
	
}
void insertBegin()	{

}
void insertAtEnd()	{

}
void insertAtPos()	{

}
void delFromBegin()	{

}
void delFromend()	{

}

void delFromPos()	{

}

void main()
{
	int ch;
	do
	{
 		printf("\n\nChoose operation");
        printf("\n1.Create");
        printf("\n2.Display");
        printf("\n3.Insert At Beginning");
        printf("\n4.Insert At End");
        printf("\n5. Insert At a Specified Position");
	    printf("\n6. Delete From Beginning");
	    printf("\n7. Delete From End");
	    printf("\n8. Delete From a Specified Position");
	    printf("\n9. Exit\n");
	    printf("\nEnter the choice: ");
		  scanf("%d",&ch);
		  switch(ch)
		  {
		   case 1:
		   	createNode();
			break;
		   case 2:
			display();
			break;
		   case 3: 
		   insertBegin(); 
		   break; 
		   case 4: 
		   insertAtEnd(); 
		   break;
		   case 5: 
		   insertAtPos(); 
		   break; 
		   case 6: 
		   delFromBegin(); 
		   break; 
		   case 7: 
		   delFromend();
		   break;
		   case 8:
		   delFromPos();
		   break;
		   case 9:
		   exit(0); 
			  default:
			printf("There is no such operation:");
		  }
		 }
		 while(ch < 5) return 0;
		}
