#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
}*start=NULL;
void create()
{
	int val;
   struct node *newnode,*ptr; 
	printf("Enter the data:(-1 to End)");
	scanf("%d",&val);
	while(val!=-1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->info=val;
		newnode->next=NULL;
		if(start==NULL)
		{
			newnode->next=start;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			  ptr=ptr->next;
			  
			ptr->next=newnode;
		}
			printf("Enter the data:(-1 to End)");
        	scanf("%d",&val);
	}
	
}
void display()
{
	struct node *ptr;
	ptr=start;
	if(ptr==NULL)
	 printf("List is Empty:");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
}
void insertend()
{
	int val;
	struct node *newnode,*ptr;
	printf("Enter the value:");
	scanf("%d",&val);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=val;
	newnode->next=NULL;
	if(satrt==NULL)
	{
		start=newnode;
	}
	ptr=start;
	while(ptr->next!=NULL)
	 ptr=ptr->next;
	 
	ptr->next=newnode;
	
}
void insertbeg()
{
	struct node *newnode,*ptr;
	int val;
	printf("Enter the  value:");
	scanf("%d",&val);
	newnode=(Struct node*)malloc(sizeof(struct node));
	newnode->info=val;
	newnode->next=start;
	start=newnode;
}
void delend()
{
	struct node *preptr,*ptr,*temp;
	if(start==NULL)
	{
		printf("List is Empty:");
	}
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
}
void delbeg()
{
	struct node *ptr;
	if(start==NULL)
	{
		printf("List is Empty:");
	}
	ptr=start;
	satrt=start->next;
	free(ptr);
}
void delnode()
{
	struct node *ptr,*temp;
	printf("Enter the value to del:");
	scanf("%d",&val);
	
	if(start->info==val)
	{
		ptr=start;
		start=start->next;
		free(ptr);
		
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			if(ptr->next->info==val)
			{
				temp=ptr->next;
				ptr->next=temp->next;
				free(temp);
				
				
			}
		}
	}
}
int main()
{
  int choice;
  
  while(1)
  {
  	printf("\n1.create:");
  	printf("\n2.Insert at End");
  	printf("\n3.Insert at beg");
  	printf("\n4.Del at beg");
  	printf("\n5.Del at end");
  	printf("\n6.Display");
  	printf("Enter your choice:")
  	scanf("%d",&choice);
  	switch(choice)
  	{
  		 case 1:
  		 	create();
  		 	break;
  		case 2:
  			
	}
  }
}
