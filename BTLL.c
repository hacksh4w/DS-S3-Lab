//DS Internal Lab Exam 

#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h>  

struct node{  
    int data;  
    struct node *left;  
    struct node *right;  
};  

#define max 100       
// creates root of binary tree  
struct node *root = NULL;  
       
struct node* createNode(int data){    
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
        // puts values taken from user
        newNode->data = data;  
        newNode->left = NULL;  
        newNode->right = NULL;  
          
        return newNode;  
    }  

struct queue  {  
    int front, rear, size;  
    struct node* *arr;  
};  
       
struct queue* createQueue()  {  
    struct queue* newQueue = (struct queue*) malloc(sizeof( struct queue ));  
       
    newQueue->front = -1;  
    newQueue->rear = 0;  
    newQueue->size = 0;  
      
    newQueue->arr = (struct node**) malloc(max * sizeof( struct node* ));  
    return newQueue;  
}  

void enqueue(struct queue* queue, struct node *temp){  
    queue->arr[queue->rear++] = temp;  
    queue->size++;  
}  
        
struct node *dequeue(struct queue* queue){  
    queue->size--;  
    return queue->arr[++queue->front];  
}  
              
//adds new node to BT 
void insertNode(int data) {  
    struct node *newNode = createNode(data);   
    if(root == NULL){  
        root = newNode;  
        return;  
    }  
    else {  
        //queue is used here to keep track of nodes of tree in level-wise order
        struct queue* queue = createQueue();  
        enqueue(queue, root);  
              
        while(true) {  
                struct node *node = dequeue(queue);  
                // adds both values to queue to be displayed level wise
            {
                if(node->left != NULL && node->right != NULL) {  
                    enqueue(queue, node->left);  
                    enqueue(queue, node->right);  
                
                }  
                else {  
                    //If node has no left child, create new left child  
                    if(node->left == NULL) {  
                        node->left = newNode;  
                        enqueue(queue, node->left); 
                        
                    }  
                    //If node has left child but no right child, create new right child  
                    else {  
                        node->right = newNode;  
                        enqueue(queue, node->right);  
                        
                    }  
                    break;  
                }  
                }
            }  
        }  
    }  

void inorderTraversal(struct node *node) {   
    if(root == NULL){  
        printf("uh Oh! Something went wrong (maybe tree is empty ;(");  
        return;  
    }  
    else {  
            
        if(node->left != NULL)  
            inorderTraversal(node->left);  
            printf("%d ", node->data);  
        if(node->right != NULL)  
            inorderTraversal(node->right);          
        }  
    }  
            
int main(){  
    int sizes,i;
    int val;
    printf("Enter number of elements to be added to the Binary tree"); 
    scanf("%d", &sizes);
    for(int i = 0; i< sizes; i++ ) {
        printf("Enter %dth element", i+1); 
        scanf("%d", &val); 
        insertNode(val);
    }
    printf("\nBinary tree after insertion: \n");   
    inorderTraversal(root);  
    return 0;  
} 
