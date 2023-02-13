 #include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
struct node *create(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("Enter -1 to end\n");
	printf("Enter the data:");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=num;
		if(start==NULL)
		{
			new_node->next=NULL;
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
		  new_node->next=NULL;
		}
		printf("Enter data:");
		scanf("%d",&num);
	}
	return start;
}
void display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	printf("Linked List is:\n");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
struct node *InsertAfter(struct node *start)
{
	struct node *new_node,*ptr;
	int num,val;
	printf("Enter the data:");
	scanf("%d",&num);
	printf("Enter the value after which node is inseted:");
	scanf("%d",&val);
	
	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->data==val)
		{
			new_node=(struct node*)malloc(sizeof(struct node));
			new_node->data=num;
			
			new_node->next=ptr->next;
			ptr->next=new_node;
			return start;
		}
		ptr=ptr->next;
	}
	printf("Data is not found:");
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.create ");
		printf("\n2.insert after");
		printf("\n1.create ");
		printf("\n3.display ");
		printf("\n4.Exit ");
		printf("\nEnter your choice ");
		scanf("%d",&choice);
		system("cls");
		switch(choice)
		{
			case 1:
				start=create(start);
				break;
			case 2:
				start=InsertAfter(start);
				break;
			case 3:
				display(start);
				break;
			case 4:
				exit(0);
		}
	}
}
