#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
}*front=NULL,*rear=NULL;
void insert(int n)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=n;
	newnode->next=NULL;
	if((front==NULL)&&(rear==NULL))
	{
	   front=rear=newnode;
	   rear->next=front;	
	}
	else
	{
		
		rear->next=newnode;
		rear=newnode;
		newnode->next=front;
	}
}
void del1()
{
	if(front==NULL && rear==NULL)
	{
		printf("Empty:");
	}
	else if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		front=front->next;
		rear->next=front;
	}
}
void display()
{
	struct node *p;
	p=front;
	do{
	  printf("%d ",p->info);
	  p=p->next;	
	}while(p!=front);
}
int main()
{
	int choice,n;
	while(1)
	{
		printf("\n1.Insert");
		printf("\n2.Del");
		printf("\n3.display");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter data:");
				scanf("%d",&n);
				insert(n);
				break;
			case 2:
				del1();
				break;
			case 3:
				display();
				break;
			
		}
		
	}
}
