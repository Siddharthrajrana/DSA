/*
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
}*start=NULL;
void create()
{
	struct node *newnode,*ptr;
	int val;
	printf("Enter -1 to End:");
	printf("Enter the data");
	scanf("%d",&val);
	while(val!=-1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->info=val;
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
		printf("Enter the data");
	    scanf("%d",&val);
	}
}
void in_beg()
{
	int val;
	struct node *newnode;
	printf("Enter data:");
	scanf("%d",&val);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=val;
	newnode->next=start;
	start=newnode;
}
void in_end()
{
	int val;
	struct node *newnode,*ptr;
	printf("Enter data:");
	scanf("%d",&val);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=val;
	newnode->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
}
void in_pos()
{
	int val,pos,i;
	struct node *newnode,*ptr;
	printf("Enter data:");
	scanf("%d",&val);
	printf("Enter position");
	scanf("%d",&pos);
	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=val;
	newnode->next=NULL;
	ptr=start;
	for(i=1;i<pos;i++)
	  ptr=ptr->next;
	  
	newnode->next=ptr->next;
	ptr->next=newnode;
}
void display()
{
	struct node *ptr;
	ptr=start;
	
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
}
void del_end()
{
	struct node *ptr,*pre;
	ptr=start;
	while(ptr->next!=NULL)
	{
		pre=ptr;
		ptr=ptr->next;
	}
	pre->next=NULL;
}
void del_beg()
{
	start=start->next;
}
void rev(struct node *p)
{
	if(p->next==NULL)
	{
		start=p;
		return;
	}
	rev(p->next);
	struct node *q=p->next;
	q->next=p;
	p->next=NULL;
}
void del_node()
{
	int val;
	struct node *ptr,*temp;
	printf("Enter the node:");
	scanf("%d",&val);
	if(start->info==val)
	{
		start=start->next;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			if(ptr->next->info==val)
			{
				if(ptr->next->next==NULL)
				{
					 ptr->next=NULL;
					 break;
				}
				 
				temp=ptr->next;
				ptr->next=temp->next;
				
			}
			ptr=ptr->next;
		}
	}
}
void rem()
{
	struct node *p,*q,*temp;
	p=start;
	while(p!=NULL)
	{
		temp=p;
		q=p->next;
		while(q!=NULL)
		{
			if(p->info==q->info)
			 temp->next=q->next;
			else
			 temp=q;
			 
			q=q->next;
		}
		p=p->next;
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.Create");
		printf("\n2.Dispaly");
		printf("\n3.Insert beg");
		printf("\n4.Insert End");
		printf("\n5.Insert pos");
		printf("\n6.Del End");
		printf("\n7.Del node");
		printf("\n8.REV");
		printf("\n9.REmove");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create();
				display();
				break;
			case 2:
				break;
			case 3:
				in_beg();
				display();
				break;
			case 4:
				in_end();
				display();
				break;
			case 5:
				in_pos();
				display();
				break;
			case 6:
				del_end();
				display();
				break;
			case 7:
				del_node();
				display();
				break;
			case 8:
				rev(start);
				display();
				break;
			case 9:
				rem();
				display();
				break;
		}
	}
}*/
#include<stdio.h>
int ht[10];
#define n 10
#define c1 1
#define c2 3

void insert()
{
	int num,key,i;
	printf("Entre no:");
	scanf("%d",&num);
	key=num%10;
	if(ht[key]==-1)
	  ht[key]=num;
	else
	{
		
	
	for(i=0;i<n;i++)
	{
		printf("Collision  occurs");
		key=(num%n + c1*i +c1*i*i)%n;
		if(ht[key]==-1)
		{
			ht[key]=num;
			break;
		}
	}
}
}
void display()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",ht[i]);
	}
}
int main()
{
	int i,choice;
	for(i=0;i<n;i++)
	  ht[i]=-1;
	while(1)
	{
		printf("\n1.Insert:");
		printf("\nDisplay");
		printf("\n1.Insert:");
		printf("choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				display();
				break;
		}
	}
}
