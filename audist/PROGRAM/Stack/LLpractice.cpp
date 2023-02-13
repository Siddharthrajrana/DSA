#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
void create()
{
	struct node *ptr,*new_node;
	int num;
	printf("Enter 0 to end:");
	printf("\nEnter Data:");
	scanf("%d",&num);
	while(num!=0)
	{
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
			{
				ptr=ptr->next;
			}
			ptr->next=new_node;
		}
		printf("Enter Data:");
		scanf("%d",&num);
	}
}
void minmax()
{
	struct node *ptr;
	ptr=start;
	int min=ptr->data;
	int max=ptr->data;
	while(ptr->next!=NULL)
	{
		if(ptr->data<min)
		min=ptr->data;
		if(ptr->data>max)
		max=ptr->data;
		
		ptr= ptr->next;
	}
	printf("minimum  value is %d , maximum value is %d",min,max);
}
void display()
{
	struct node *ptr;
	ptr=start;
	while(ptr->next!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	create();
	display();
	minmax();
}
