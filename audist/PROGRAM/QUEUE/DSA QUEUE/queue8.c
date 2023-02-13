#include<stdio.h>
#include<conio.h>
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
		printf("Queue overflow");
	else
	{
		rear=(rear+1)%n;
		queue[rear]=x;
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
		printf("Queue empty");
	else
	{
		printf("element to be deleted is %d",queue[front]);
		front=(front+1)%n;
	}
}
void display()
{
	int i,c=0;
	for(i=front;i!=rear;i=(i+1)%n)
	{
		printf("Data in queue is :%d",queue[i]);
		c++;
	}
			printf("Data in queue is :%d",queue[rear]);
			printf("Count of elements is :%d",c+1);

}
void peek()
{
	printf("Data in top is :%d",queue[front]);
}
void main()
{
	int exit=1;
	do
	{
		int ch;
		printf("Enter 1. enqueue \n 2. dequeue \n 3. display and count \n 4. peek \n 5. exit");
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

			display();
			break;
			default:
			printf("Invalid choice");
			}
	}while(exit);
}		
