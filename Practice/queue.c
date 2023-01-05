#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ;
    struct node *next;
}*front=NULL,*rear=NULL;

void enQueue(int );
int deQueue();
void display();
int peek();

int main()
{
    int choice,data;

    while (choice!=5)
    {
        printf("\n1. Enqueue\n2. Dequeue \n3. Display \n4. Peek \n5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter the Data to Enqueue : ");
                scanf("%d",&data);
                enQueue(data);
                break;

            case 2:
                printf("\nDequeued Element is %d .", deQueue());
                break;

            case 3:
                printf("\nThe Queue is \n");
                display();
                break;

            case 4:
                printf("\n%d is the Peek Element .",peek());
                break;

            case 5:
                printf("\n Ok! Exit");
                break;
            
            default:
                printf("\n Please enter the valid choice  ");
        }
    }
    return 0;

}
int isEmpty()
{
    if (rear==NULL)
        return 1;
    else 
        return 0;
}
void enQueue(int data)
{
   struct node *newNode;
   newNode=malloc(sizeof(struct node));
   newNode->data=data;
   newNode->next=NULL;

   if(rear==NULL)
   {
    front=rear=newNode;
   }
   else
   {
    rear->next=newNode;
    rear=newNode;
   }
}
void display()
{
    if (isEmpty())
    {
        printf("Queue is Empty.");
        exit (1);
    }
    else 
    {
        struct node *temp;
        temp=front;
        
        while (temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        
    }
}
int deQueue()
{
    if(isEmpty())
    {
        printf("\nQueue is Empty ");
        exit (1);
    }
    else
    {   
        int val;
        struct node *temp;
        temp=front;
        val=temp->data;
        front=front->next;
        free (temp);

        return val;

    }
}
int peek()
{
    if(isEmpty())
    {
        printf("\nQueue is Empty");
        exit (1);
    }
    else 
    {
        return front->data;
    }
}