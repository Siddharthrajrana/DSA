#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push(int );
int isEmpty();
int pop();
int peek();
void display();

int main()
{
    int choice ;
    int data;
    while(choice!=5)
    {
        printf("\n1.Push\n2.POp\n3.Peek\n4.Display\n5.Exit");
        printf("\nEnter your choice ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\nEnter the data to push .");
            scanf("%d",&data);
            push(data);
            break;

            case 2:
            printf("\nPoped Element is : %d",pop());
            break;

            case 3:
            printf("\nPeek Element is : %d",peek());
            break;

            case 4:
            printf("\nThe stack is : \n");
            display();
            break;

            case 5:
            printf("\nOk! Exit.");
            break;

            default:
            printf("Please Enter the valid choice ");


             
        }
    }
    return 0;
}

int isEmpty()
{
    if (top == NULL)
        return 1;
    else 
        return 0;
}

void push(int data)
{
    struct node *newNode;
    newNode=malloc(sizeof(struct node ));
    newNode->data=data;
    newNode->next=NULL;

    newNode->next=top;
    top=newNode;
}

void display()
{
    struct node *temp;
    temp=top;
    
    if(isEmpty())
    {
        printf("\nStack Underflow.");
    }
    else
    {
    while(temp)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
    }
}

int pop()
{
    if(isEmpty())
    {
        printf("\n Stack Underflow");
        exit (1);
    }
    else
    {   
        int val;
        struct node *temp;
        temp=top;
        val=temp->data;
        top=top->next;
        free (temp);
        return val;
    }
}
int peek()
{
    if(isEmpty())
    {
        printf("\nStack Underflow ");
        exit (1);
    }
    else
     return top->data;
}