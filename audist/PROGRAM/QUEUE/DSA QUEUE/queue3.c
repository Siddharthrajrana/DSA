#include<stdio.h>
#include<stdlib.h>
# define n 5

int front=-1,rear=-1;
int queue[n];
void enqueue()
{
    int x;
    printf("Enter data");
    scanf("%d",&x);
    if(front==-1 && rear==-1)
    {
        front=rear=0;
      queue[rear]=x;
}
else if((rear+1)%n==front)
{
    printf("full queue");
}
else{
    rear=(rear+1)%n;
    queue[rear]=x;
}
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue empty");
    }
    
    else{
        int *temp;
        temp=&front;
        printf("Element to be deleted is :%d",queue[front]);
        front=(front+1)%n;

        free(temp);
    }
}
void display()
{
    int i;
    for(i=front;i!=rear;i=(i+1)%n)
    {
        printf("Data is %d",queue[i]);
    }
        printf("Data is %d",queue[rear]);


}
void peek()
{
    printf("Data is %d",queue[front]);
}
void main()
{
    int exit=1;
    do
    {
    int ch;
    printf("Enter\n 1. enqueue\n 2. dequeue\n 3. display\n 4. peek\n 5. exit")
    ;scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        enqueue();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
                   break;
        case 4:
        peek();
        break;
        case 5:
        exit=0;
        break;
        default:
        printf("Invalid choice");
    }
}while(exit);
}