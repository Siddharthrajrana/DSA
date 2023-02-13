#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	int prority;
	struct node *link;
}*front=NULL,*rear=NULL;
void insert(int item,int pr)
{
	struct node *temp,*ptr;
	 temp=(struct node *)malloc(sizeof(struct node));
	 temp->info=item;
	 temp->prority=pr;
	 temp->link=NULL;
	 if(front==NULL ||pr<front->prority)
	 {
	 	temp->link=front;
	 	front=temp;
	 }
	 else
	 {
	 	ptr=front;
	 	while(ptr->link!=NULL && ptr->link->prority <=pr)
	 	  ptr=ptr->link;
	 	  
	 	  temp->link=ptr->link;
	 	  ptr->link=temp;
	 }
}

int del()
{
	struct node *temp;
	temp=front;
	int data=temp->info;
	front=front->link;
	free(temp);
	return data;
}
void display()
{
	struct node *ptr;
	ptr=front;
	while(ptr!=NULL)
	{
		printf("%d [prority%d] ",ptr->info,ptr->prority);
		ptr=ptr->link;
	}
}
int main()
{
	int choice,item,pr;
	while(1)
	{
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.Display");
		printf("\n4.Rev");
		printf("\n5.Exit");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter item:");
				scanf("%d",&item);
				printf("Enter prority:");
				scanf("%d",&pr);
				insert(item,pr);
				break;
			case 2:
				printf("Deleted item: %d",del());
				break;
			case 3:
				display();
			break;
			case 4:
			//	rev();
				break;
			case 5:
				exit(0);
		}
		
		
	}
}
