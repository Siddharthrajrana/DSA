//Queue implementation using Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int queue[MAX],front=-1,rear=-1;

int isFull()
{
    if(rear==MAX-1)
       return 1;
    else 
       return 0;    
}
int isEmpty()
{
    if(front==-1||front==rear+1)//front should always less then rear 
      return 1;
    else 
     return 0;
}
void enQueue(int val)
{
    if(isFull())
    {
        printf("Queue OverFolws");
    }
    if(front==-1)//when queue is empty 
       front=0;

       rear++;
       queue[rear]=val;
}
void deQueue()
{
    if(isEmpty())
      printf("Queue is Already Empty .");
    else
    {
        int data =queue[front];
        front++;
        printf("Dequeue %d.",data);
    }
}
void Display()
{   
    if(isEmpty())
       printf("Queue is Empty");
    else{
    printf("Your Queue is \n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    }
}
void peak()
{
  printf("Peak is %d",queue[front]);
}
int main()
{
  int choice;
  int val;
  while(choice!=5)
  {
    printf("\n");
    printf("\nEnter your choice \n");
    printf("\n1.EnQueue.");
    printf("\n2.DeQueue.");
    printf("\n3.Display Queue.");
    printf("\n4.Peak.");
    printf("\n5.Exit.\n\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
           printf("Please enter the value to Enqueue: ");
           scanf("%d",&val);
           enQueue(val);
        break;

        case 2 :
           deQueue();
        break;

        case 3:
          Display();
        break;

        case 4:
           peak();
        break; 

        case 5:
          break;

        default:
         printf("\nWrong choice ");
    }

  }
}