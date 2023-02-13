//Write a program that creates a singly linked list. 
//Use a function isSorted that returns 1 if the list is 
//sorted and 0 otherwise.
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL;
int count=0;
struct node *create(struct node *start)
{
	struct node *ptr,*new_node;
	int num;
	printf("Enter -1 to End:");
	printf("Enter data:");
	scanf("%d",&num);
	while(num!=-1)
	{
		count++;
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=num;
		new_node->next=NULL;
		if(start==NULL)
		{
			start=new_node;
		
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			ptr=ptr->next;
			
			ptr->next=new_node;
		}
		printf("Enter data:");
	    scanf("%d",&num);
	}
	return start;
}
void Rev(struct node *p)
{
	if(p->next==NULL)
	{
		start=p;
		return;
	}
	Rev(p->next);
	struct node *q=p->next;
	q->next=p;
	p->next=NULL;
}
void display()
{
	struct node *ptr;
	ptr=start;
	
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	//printf("%d ",count);
}
struct node *delbeg(struct node *start)
{
	struct node *temp;
	temp=start;
	start=start->next;
	free(temp);
	return start;
}
struct node * dellist(struct node *start)
{
	struct node *ptr;
	if(start!=NULL)
	{
		ptr=start;
		while(ptr!=NULL)
		{
			printf("%d is deleted next",ptr->data);
			start=delbeg(start);
			ptr=start;
		}
	}
}
struct node *delnode(struct node *start)
{
	struct node *ptr,*temp;
	int data;
	printf("Enter the node to delete");
	scanf("%d",&data);
	if(start->data==data)
	{
		temp=start;
		start=start->next;
		return start;
	}

		ptr=start;
		while(ptr->next!=NULL)
		{
			if(ptr->next->data==data)
			{
				temp=ptr->next;
				ptr->next=temp->next;
				free(temp);
				return start;
			}
			ptr=ptr->next;
		}
	
	return start;
}
struct node *delend(struct node *delend)
{
	struct node *temp,*ptr,*preptr;
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
	return start;
	  
}
int isSorted(struct node *start)
{
	struct node *ptr;
	ptr=start;
	int x=-65536;
	
	while(ptr!=NULL)
	{
		if(ptr->data < x)
		  return 0;
		  
		x=ptr->data;
		ptr=ptr->next;
	}
	return 1;

}
struct node *sort(struct node *start)
{
	struct node *p,*q;
	int temp;
	for(p=start;p->next!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(p->data > q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
	return start;
}
int main()
{
	int choice,n;
	while(1)
	{
		printf("\n1.Create");
		printf("\n2.Display");
		printf("\n3.sort");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				start=create(start);
				break;
			case 2:
				display();
				break;
			case 3:
			  Rev(start);
			  break;
			case 4:
				exit(0);
		}
	}
}
