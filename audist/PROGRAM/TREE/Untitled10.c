/*
#include<stdio.h>
#include<stdlib.h>
struct node{
	int num;
	int coff;
	struct node *next;
};
struct node *start1=NULL,*start2=NULL,*start3=NULL,*start4=NULL;
struct node *addnode(struct node *start,int n,int c);
struct node *create(struct node *start)
{
	int n,c;
	struct node *newnode,*ptr;
	printf("Enter -1 to End:");
	printf("Enter number:");
	scanf("%d",&n);
	printf("Enter its coff:");
	scanf("%d",&c);
	while(n!=1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->num=n;
		newnode->coff=c;
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
	      printf("Enter number:");
	      scanf("%d",&n);
	      if(n==-1)
	        break;
	     printf("Enter its coff:");
	     scanf("%d",&c);
	}
	return start;
}
void display(struct node *start)
{
	struct node *ptr=start;
	while(ptr!=NULL)
	{
		printf("%dX%d",ptr->num,ptr->coff);
		ptr=ptr->next;
		if(ptr!=NULL)
		  printf(" +");
		else
		 printf("\n");
	}
}
struct node *add(struct node *start1,struct node *start2,struct node *start3)
{
	struct node *ptr1,*ptr2;
	int sum;
	ptr1=start1;
	ptr2=start2;
	while(ptr1!=NULL && ptr2!=NULL)
	{
		if(ptr1->coff == ptr2->coff)
		{
			sum=ptr1->num+ptr2->num;
			start3=addnode(start3,sum,ptr1->coff);
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->coff > ptr2->coff)
		{
			start3=addnode(start3,ptr1->num,ptr1->coff);
			ptr1=ptr1->next;
		}
		else if(ptr1->coff < ptr2->coff)
		{
			start3=addnode(start3,ptr2->num,ptr2->coff);
			ptr2=ptr2->next;
		}
	}
	if(ptr1==NULL)
	{
		while(ptr2!=NULL)
		{
			start3=addnode(start3,ptr2->num,ptr2->coff);
			ptr2=ptr2->next;
		}
	}
	if(ptr2==NULL)
	{
		while(ptr1!=NULL)
		{
			start3=addnode(start3,ptr1->num,ptr1->coff);
			ptr1=ptr1->next;
		}
	}
	return start3;
}
struct node *addnode(struct node *start,int n,int c)
{
	    struct node *newnode ,*ptr;
	    
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->num=n;
		newnode->coff=c;
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
		return start;
	    
}
int main()
{
	printf("Create list 1:");
	start1=create(start1);
	display(start1);
    
    printf("Create list 2:");
	start2=create(start2);
	display(start2);
	
	start3=add(start1,start2,start3);
	printf("after addition:");
	display(start3);
}
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack2[MAX];
int stack1[MAX];
int top1=-1;
int top2=-1;
void push1(int n)
{
	if(top1==MAX-1)
	 printf("Stack overflow:");
	else
	 {
	 	stack1[++top1]=n;
	 }
}
void push2(int n)
{
	if(top2==MAX-1)
	 printf("Stack overflow:");
	else
	 {
	 	stack2[++top2]=n;
	 }
}
int pop1()
{
	if(top1==-1)
	  return -1;
	else
	{
		return stack1[top1--];
	}
}
int pop2()
{
	if(top2==-1)
	  return -1;
	else
	{
		return stack2[top2--];
	}
}
int main()
{
	int choice,val;
	int count;
	int flag=1;
	while(1)
	{
		printf("\n1.Push into stack1");
		printf("\n2.Push into stack2");
		printf("\n3.Compare:");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the data:");
				scanf("%d",&val);
				push1(val);
				break;
			case 2:
				printf("Enter the data:");
				scanf("%d",&val);
				push2(val);
				break;
			case 3:
				 count=top1;
				if(top1!=top2)
				{
					printf("Stack is not eual");
					break;
				}
				 while(count)
				 {
				    int x=pop1();
				    int y=pop2();
				    if(x!=y)
				    {
				  	 flag=0;
				  	 break;
				   }
				   count--;
			     }
				if(flag==1)
				 printf("Elemets of stack is Equal");
				else
				 printf("Elemets of stack is not Eual");
				break;
		}
	}
}
