#include<stdio.h>
#include<stdlib.h>
struct node
{
	char data;
	struct node *next;
}*newnode,*temp;
void main()
{
	int i,j,k,b,n,m=64,p;
	char a;
	printf("Graph Representation");
	printf("\nEnter the no. of nodes: ");
	scanf("%d",&n);
	struct node g[n];
	for(i=0;i<n;i++)
	{
		g[i].data=m+i+1;
		g[i].next=0;
	}
	for(i=0;i<n;i++)
	{ 
		p=n;
		printf("\nEnter the no of neighbours of node %c: ",m+i+1);
		scanf("%d",&k);
		for(j=0;j<k;j++)
		{
			printf("Enter Neighbour %d: ",j+1);
			scanf("%s",&a);
			temp=g[i].next;
			newnode=(struct node*)malloc(sizeof(struct node*));
			newnode->data=a;
			newnode->next=0;
			if(temp==0)
				g[i].next=newnode;
			else
			{
				while(temp->next!=0)
					temp=temp->next;
				temp->next=newnode;	
			}
		}
		n=p;
	}
	printf("\nAdjacency List Representation:\n");
	for(i=0;i<n;i++)
	{
		temp=g[i].next;
		printf("%c",g[i].data);
		while(temp!=0)
		{
			printf("-->%c",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
