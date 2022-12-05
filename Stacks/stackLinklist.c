//Stack implementation Using Link List
#include<stdio.h>
#include<stdlib.h>
int choice2;
struct node
{
    int data;
    struct node *next;
}*top=NULL;

int isEmpty()
{
    if(top==NULL)
      return 1;
    else 
      return 0;
}

void push(int data)
{
    struct node *newNode;
    newNode= malloc(sizeof(struct node ));
    newNode->data=data;
    newNode->next=NULL;

    newNode->next=top;
    top=newNode;
}
int pop()
{
    struct node *temp;
    temp=top;
    
    int val =temp->data;
    top=top->next;
    free(temp);
    return val;
    
}

int peek()
{
    if(isEmpty)
      printf("Stack Underflow");
    else 
    return top->data;
}

void display()
{
    struct node *temp;
    temp=top;
    
    printf("Stack Elements are \n");
    while(temp)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
    

}
int main()
{   int x;
    int choice ;
    while(choice!=5)
    {  
      Label:
        printf("\n");
    printf("\nEnter your choice : \n\n");
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Peak");
    printf("\n4.Display");
    printf("\n5.Exit\n\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
           
           printf("Enter the value to push : ");
           scanf("%d",&x);
           push(x);
        break;

        case 2 :
           printf("Deleted Element is %d",pop());
        break;

        case 3:
         peek();
        break;

        case 4:
           display();
        break; 

        case 5:
         printf("OK ! Your Exit Successfull.");
          break;
        default:
         printf("\nWrong choice ");
    }
    }
    //
    printf("\n\nPress one if you want to re-enter the prog.");
      scanf("%d",&choice2);
      if(choice2==1)
      goto Label;
    return 0;

}