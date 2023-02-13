#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
}*start1=NULL,*start2=NULL,*start3=NULL;

struct node *create(struct node *start)
{
	int val;
	struct node *newnode,*ptr;
	printf("Enter -1 to End:");
	printf("\nEnter data:");
	scanf("%d",&val);
	while(val!=-1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=val;
		newnode->next=NULL;
		if(start==NULL)
		{
			start=newnode;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			  ptr=ptr->next;
			  
			ptr->next=newnode;
		}
		printf("\nEnter data:");
	    scanf("%d",&val);
	}
	return start;
}
void display(struct node *start)
{
	struct node *ptr=start;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
void sort(struct node *start)
{
	struct node *p,*q;
	for(p=start;p->next!=NULL;p=p->next)
	{
		for(q=p;q!=NULL;q=q->next)
		{
			if(p->data > q->data)
			  {
			  	int temp=p->data;
			  	p->data=q->data;
			  	q->data=temp;
			  }
		}
	}
}
int main()
{
	printf("create fist list\n");
	start1=create(start1);
	printf("List 1:\n");
	display(start1);
	
	printf("create second list\n");
	start2=create(start2);
	printf("List 2:\n");
	display(start2);
	struct node *ptr=start1;
	while(ptr->next!=NULL)
	  ptr=ptr->next;
	  
	ptr->next=start2;
	
	sort(start1);
	printf("After merging:");
	display(start1);
	
}
