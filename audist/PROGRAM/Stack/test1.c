#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack[20];
void push_stack(int item)
{
	top++;
	stack[top]=item;
}
int pop1()
{
	return (stack[top--]);
}
struct node{
	int info;
	int priority;
	struct node *link;
}*front=NULL,*rear=NULL;
void insert_rear(int item)
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=item;
	temp->link=NULL;
	if(front==NULL)
	  front=temp;
	else
	  rear->link=temp;
	rear=temp;
}
void insert_front(int item)
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=item;
	temp->link=NULL;
	if(rear==NULL)
	  rear=temp;
	else
	  temp->link=front;
	
	front=temp;
}


int del_front()
{
	struct node *temp;
	int data;
	temp=front;
	data=temp->info;
	front=front->link;
	free(temp);
	return data;
}
int del_rear()
{
	struct node *ptr,*temp;
	int data;
	if(front==rear)
	{
		data=front->info;
		free(front);
		front=NULL;
		rear=NULL;
		return data;
	}
	ptr=front;
	while(ptr->link!=NULL)
	  ptr=ptr->link;
	  
	  temp=rear;
	  data=rear->info;
	  ptr->link=NULL;
	  free(rear);
	return data;
}
void rev()
{
	struct node *temp;
	temp=front;
	while(temp!=NULL)
	{
		push_stack(temp->info);
		temp=temp->link;
	}
	temp=front;
	int item;
	while(temp!=NULL)
	{
		item=pop1();
		temp->info=item;
		temp=temp->link;
	}
}
void  count()
{
	struct node *ptr;
	ptr=front;
	int count=0;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->link;
	}
	printf("\n%d",count);
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
int main()
{
	int choice,pr,item;
	while(1)
	{
		printf("\n1.Insert at front End");
		printf("\n2.Insert At Rear End");
		printf("\n3.Delete from front ");
		printf("\n4.Delete from rear ");
		printf("\n5.Display");
		printf("\n.6Exit");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter item");
				scanf("%d",&item);
		         insert_front(item);
				break;
			case 2:
				printf("Enter item");
				scanf("%d",&item);
		         insert_rear(item);
				break;
			case 3:
				printf("Deleted from front:%d",del_front());
				break;
			case 4:
				printf("Deleted from front:%d",del_rear());
				break;
			case 5:
				display();
			    break;
			case 6:
				exit(0);
		}
	}
}
