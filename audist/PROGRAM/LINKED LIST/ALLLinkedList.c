/*
	Name: 
	Copyright: 
	Author: 
	Date: 10-11-22 11:26
	Description: SINGLY LINKED LIST
*/

#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
void display(struct node*);
struct node *create(struct node*);
void minmax(struct node *start);
void search(struct node *start,int item);
void sortedorNot(struct node *start);
struct node *reverse(struct node *start);
void removeDup(struct node *start);
void Mul(struct node *start);
struct node *InsertAtBeg(struct node *start);
struct node *InsertAtEnd(struct node *start);
struct node *InsertAfter(struct node *start);
struct node *DeleteNode(struct node *start);
struct node *DelAtEnd(struct node *start);
struct node *DelAtBeg(struct node *start);
int main()
{
	int option, item;
	while(1)
	{
		printf("\n1.create list");
		printf("\n2.Insert:");
		printf("\n3.Delete");
		printf("\n4.Dispaly");
		printf("\n5.Search");
		printf("\n6.findMax");		
		printf("\n7.sorted or not");		
		printf("\n8.Reverse:");		
		printf("\n9.Remove duplicate:");
		printf("\n10.Multiply 10 to each node");
		printf("\n11.Exit");
		printf("\nEnter choice:\n");
		scanf("%d",&option);
		system("cls");
		switch(option)
		{
			case 1:
				start=create(start);
				printf("Linked list is created");
				break;
			case 2:
				while(1)
				{
					printf("\n1.Insert at Beg");
					printf("\n2.Insert at End");					
					printf("\n3.Insert after node");					
					printf("\n4.Back");					
					printf("\nEnter your choice\n");
					scanf("%d",&option);
					system("cls");
					switch(option)
					{
						case 1:
							start=InsertAtBeg(start);
						break;
						 case 2:
						    start=InsertAtEnd(start);
					    break;
					    case 3:
					    	start=InsertAfter(start);
					    break;
					}
					if(option==4)
					break;
				}
				break;
			case 3:
				while(1)
				{
					printf("\n1.Delete at Beg");
					printf("\n2.Delete at End");					
					printf("\n3.Delete node");					
					printf("\n4.Back");					
					printf("\nEnter your choice\n");
					scanf("%d",&option);
					system("cls");
					switch(option)
					{
						case 1:
							start=DelAtBeg(start);
							printf("Deleted successfully..");
						 break;
						case 2:
							start=DelAtEnd(start);
							printf("Deleted successfully..");
							break;
						case 3:
						 start=DeleteNode(start);
						 printf("Deleted successfully..");
						 break;
						
					}
					if(option==4)
					break;
				}
				break;
			case 4:
				display(start);
				//count(start);
				break;
			case 5:
				printf("Enter the item to be searched:");
				scanf("%d",&item);
				search(start,item);
				break;
			case 6:
		        minmax(start);		
				break;
			case 7:
				sortedorNot(start);
				break;
			case 8:
				start=reverse(start);
				break;
			case 9:
				removeDup(start);
				  break;
			case 10:
				Mul(start);
				break;
			case 11:
				exit(0);
		}
	}
}
struct node *DelAtEnd(struct node *start)
{
	struct node *preptr,*ptr;
	ptr=start;
	if(start->next==NULL)
	{
		start=NULL;
	}
	else
	{
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	 
	 preptr->next=ptr->next;
	 free(ptr);
    }
	 return start;
	 
	 
}
struct node *DelAtBeg(struct node *start)
{
	struct node *ptr;
	ptr=start;
	start=start->next;
	free(ptr);
	return start;
}
struct node *DeleteNode(struct node *start)
{
	int data;
	struct node *temp,*ptr;
	printf("Enter the node to delete");
	scanf("%d",&data);
	if(start->data==data)
	{
		ptr=start;
		start=start->next;
		free(ptr);
		return start;
	}
	ptr=start;
	while(ptr->next!=NULL)
	{
		if(ptr->next->data == data)
		{
			temp=ptr->next;
			ptr->next=temp->next;
			free(temp);
			return start;
		}
		ptr=ptr->next;
	}
	printf("Node is not found");
	//return start;
}
struct node *InsertAtBeg(struct node *start)
{
	struct node *new_node;
	int num;
	printf("Enter data:");
	scanf("%d",&num);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	new_node->next=start;
	start=new_node;
}
struct node *InsertAtEnd(struct node *start)
{
	struct node *ptr,*new_node;
	int num;
	printf("Enter data");
	scanf("%d",&num);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	new_node->next=NULL;

	ptr=start;

	while(ptr->next!=NULL)
	 ptr=ptr->next;
	 
	ptr->next=new_node;
	
	return start;
}
struct node *InsertAfter(struct node *start)
{
	struct node *new_node,*ptr;
	int num,val;
	printf("Enter the data");
	scanf("%d",&num);
	printf("Enter the value after which node is inseted:");
	scanf("%d",&val);
	
	ptr=start;
	printf("****");
	while(ptr!=NULL)
	{
		if(ptr->data==val)
		{
			new_node=(struct node*)malloc(sizeof(struct node));
			new_node->data=num;
			
			new_node->next=ptr->next;
			ptr->next=new_node;
		}
		ptr=ptr->next;
	}
	return start;
}
struct node *create(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("\n Enter -1 to end");
	printf("\nEnter the data");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data =num;
		if(start==NULL)
		{
			new_node->next=NULL;
			start=new_node;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			 ptr=ptr->next;
			 
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
	if(start==NULL)
	{
		printf("List is Empty:");
		return;
	}
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}	
}
void Mul(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		ptr->data=ptr->data*10;
		ptr=ptr->next;
	}
}
void search(struct node *start,int item)
{
	struct node *ptr=start;
	int pos=1;
	while(ptr!=NULL)
	{
		if(ptr->data==item)
		{
			printf("item is found at %d position",pos);
			return;
		}
		pos++;
		ptr=ptr->next;
	}
	printf("item is not found:");
}
//18.find minimum and maximum
void minmax(struct node *start)
{
	struct node *ptr=start;
	int min=ptr->data;
	int max=ptr->data;
	while(ptr!=NULL)
	{
		if(ptr->data < min)
		 min=ptr->data;
		if(ptr->data > max)
		  max=ptr->data;
		  
		ptr=ptr->next;
	}
	printf("Minimun:%d",min);
	printf("\nMaxmum:%d",max);
}
//Linked list is sorted or not
void sortedorNot(struct node *start)
{
	struct node *ptr=start;
	int x=-65536;
	while(ptr!=NULL)
	{
		if(ptr->data < x)
		{
			printf("Linked list is not sorted..");
			return ;
		}
		x=ptr->data;
		ptr=ptr->next;
	}
	printf("Linked list is sorted..");
}
struct node *reverse(struct node *start)
{
	struct node *p,*q,*r;
	r=NULL;
	q=NULL;
	p=start;
	
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	start=q;
	return start;
	
}
void removeDup(struct node *start)
{
	struct node *p,*q,*temp;
	p=start;
	while(p!=NULL)
	{
		temp=p;
		q=p->next;
		while(q!=NULL)
		{
			if(p->data==q->data)
			  temp->next=q->next;
			else
			temp=q;
			
			q=q->next;
		}
		p=p->next;
	}
}
