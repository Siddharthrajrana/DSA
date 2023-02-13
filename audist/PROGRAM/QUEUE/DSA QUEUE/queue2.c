#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node * front=0,*rear=0,*temp,*newnode;
void enqueue()
{
     int x;
     printf("Enter the value x");
     scanf("%d",&x);
     newnode=(struct node *)malloc(sizeof(struct node ));
	 newnode->data=x;
	 newnode->next=0;
     if(front==0 && rear==0)
	 front=rear=newnode;
	 else
	 {
		rear->next=newnode;
		rear=newnode;
	 }
	}

void dequeue()
{
	temp=front;
	printf("Element to be deleted is :%d",front->data);
	front=front->next;
	free(temp);
}
void display()
{
	temp=front;
	while(temp!=0)
	{
		printf("Data in node is:%d",temp->data);
		temp=temp->next;
	}
}
void peek()
{
   printf("Data is :%d",front->data);
}
void main()
{
	int exit=1;
	do
	{
		int ch;
		printf("Enter 1. enqueue \n 2. dequeue \n 3. display \n 4. peek \n 5. exit");
		scanf("%d",&ch);
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
	
