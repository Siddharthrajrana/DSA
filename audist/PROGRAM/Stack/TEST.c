#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
}*front=NULL,*rear=NULL;
int top=-1;
int stack[20];
void push(int item)
{
	stack[++top]=item;
}
int pop()
{
	return (stack[top--]);
}
void insert_rear(int item)
{
	struct node *temp;
	 temp=(struct node *)malloc(sizeof(struct node));
	 temp->info=item;
	 temp->link=NULL;
	 if(front==NULL)
	    front=temp;
	else
	  rear->link=temp;
	  rear=temp;
}
int del_front()
{
	struct node *temp;
	temp=front;
	int data=temp->info;
	front=front->link;
	free(temp);
	return data;
}
int del_rear()
{
	struct node *temp,*ptr;
	int data;
	if(front==rear)
	{
		temp=front;
		 data=temp->info;
		front=NULL;
	    rear=NULL;
	    free(temp);
	    return data;
	}
	ptr=front;
	while(ptr->link!=rear)
	  ptr=ptr->link;
	  
	  data=rear->info;
	  temp=rear;
	  rear=ptr;
	  ptr->link=NULL;
	 free(temp);
	 
	return data;
}
void insert_front(int item)
{
	struct node *temp;
	 temp=(struct node *)malloc(sizeof(struct node));
	 temp->info=item;
	 temp->link=NULL;
	 if(rear==NULL)
	  rear=temp;
	else
	  temp->link=front;
	front=temp;
}
void display()
{
	struct node *ptr;
	ptr=front;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->link;
	}
}
void rev()
{
	struct node *ptr;
	ptr=front;
	while(ptr!=NULL)
	{
		push(ptr->info);
		ptr=ptr->link;
	}
	ptr=front;
	while(ptr!=NULL)
	{
		int item=pop();
		ptr->info=item;
		ptr=ptr->link;
	}
	printf("Reversed suessfully");
}
int main()
{
	int choice,item;
	while(1)
	{
		printf("\n1.Inseret at front");
		printf("\n2.Insert at rear");
		printf("\n3.Delete from front");
		printf("\n4.Delete from rear");
		printf("\n5.display");
		printf("\n6.Exit");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter item:");
				scanf("%d",&item);
				insert_front(item);
				break;
			case 2:
				printf("Enter item:");
				scanf("%d",&item);
				insert_rear(item);
				break;
			case 3:
				printf("Deleted item: %d",del_front());
			break;
			case 4:
			  printf("Deleted item: %d",del_rear());
			  break;
			case 5:
				display();
				break;
			case 6:
				exit(0);
		}
	}
}
