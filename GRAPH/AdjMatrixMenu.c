#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int adj[MAX][MAX];
int n;
void create_graph()
{
	int i,j,edges,origin,distin;
	printf("Enter the number of vertex:");
	scanf("%d",&n);
	edges=n*(n-1);
	for(i=0;i<edges;i++)
	{
		printf("Enter the %d edges(-1 -1 to Exit)",i);
		scanf("%d%d",&origin,&distin);
		if(origin==-1||distin==-1)
		  break;
		if(origin>=n||origin<0||distin>=n||distin<0)
		{
			printf("Invalid");
			i--;
		}
		else
		{
			adj[origin][distin]=1;
		}
	}
}
void inserte(int origin,int distin)
{
	if(origin>=n||origin<0||distin>=n||distin<0)
		{
			printf("Vertex does not Exit");
			return;
		}
		else
		{
			adj[origin][distin]=1;
		}
}
void del(int origin,int distin)
{
	if(origin>=n||origin<0||distin>=||distin<0)
		{
			printf("vertex does not Exit");
			return;
		}
		else
		{
			adj[origin][distin]=0;
		}
}
void display()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		  printf("%4d",adj[i][j]);
	   printf("\n");	
	}
}
int main()
{
	create_graph();
	int choice;
	int origin,distin;
	while(1)
	{
		printf("\n1.Enter Edges:");
		printf("\n2.Delete an edges");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter an edges:");
				scanf("%d%d",&origin,&distin);
				inserte(origin,distin);
				break;
			case 2:
				printf("Enter the edges to deleted:");
				scanf("%d%d",&origin,&distin);
				del(origin,distin);
			    break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				
		}
	}
}
