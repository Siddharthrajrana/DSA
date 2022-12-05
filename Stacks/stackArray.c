//Stack Implementation Using Array
#include<stdio.h>

int stack[3],top=-1;
int choice2;
void push()
{   
    int value;
    
    if(top==2)
      printf("Stack Overflow");
    
    else
    {  
        printf("\nEnter the value you want to push : ");
        scanf("%d",&value);
        top++;
        stack[top]=value;
        printf("%d is pushed successfully. ", value);

    }

}
void pop()
{
    if(top==-1)
      printf("Stack underflow");

    else
    {
      int temp = top;
      top--;
      
      printf("Poped Successfull");

    }
}
void Display()
{   
    printf("\n Displayed Stack  : \n");
    for(int i =top ; i>=0; i--)
       printf("%d\n",stack[i]);
}
void peak()
{
    printf("%d is the Peak.",stack[top]);
}

int main()
{
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
           push();
        break;

        case 2 :
           pop();
        break;

        case 3:
         peak();
        break;

        case 4:
           Display();
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