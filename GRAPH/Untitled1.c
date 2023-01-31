#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int adj[MAX][MAX];
int n,i;
int queue[MAX],front=-1,rear=-1;
int indegree(int);
void insert_q(int v)
{
	if(front==-1)
	  front=0;
	rear++;
	queue[rear]=v;
}
int del_q()
{
	int v=queue[front];
	front++;
	return v;
}
int is_Empty()
{
	if(front==-1|| front>rear)
	 return 1;
	 else
	 return 0;
}
int indegree(int v)
{
	int d=0;
	for(i=0;i<n;i++)
	 {
	 	if(adj[i][v]==1)
	 	  d++;
	 }
	 return d;
}
void create_graph()
{
	int i,j,e,d,o;
	printf("Enter the nuber of vertex:");
	scanf("%d",&n);
	e=n*(n-1);
	for(i=0;i<e;i++)
	{
		printf("Enter the edges %d(-1 -1 to Exit)",i);
		scanf("%d%d",&o,&d);
		if(o==-1||d==-1)
		 break;
		 if(o>=n||o<0||d>=n||d<0)
		 {
		 	printf("Invalid edges ");
		 	i--;
		 }
		 else
		 {
		 	adj[o][d]=1;
		 }
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		  printf("%4d",adj[i][j]);
		  
		printf("\n");
	}
	
}
int main()
{
	int v,i,indeg[MAX];
	create_graph();
	for(i=0;i<n;i++)
	{
		indeg[i]=indegree(i);
		if(indeg[i]==0)
		 insert_q(i);
	}
	while(!is_Empty())
	{
		v=del_q();
		printf("%d ",v);
		for(i=0;i<n;i++)
		{
			if(adj[v][i]==1)
			{
				adj[v][i]=0;
				indeg[i]=indeg[i]-1;
				if(indeg[i]==0)
				 insert_q(i);
			}
		}
	}
}
