#include<stdio.h>
#define MAX 100
int adj[MAX][MAX];
#define initial 1
#define waiting 2
#define visited 3
int queue[MAX],rear=-1,front=-1;
int state[MAX];
int n,i;
void create_graph();
void BFS();
int del_q();
void insert_q();
int main()
{
	create_graph();
	int v;
	for(i=0;i<n;i++)
	   state[i]=initial;
	   
	printf("Enter starting vertex:");
	scanf("%d",&v);
	BFS(v);
	 
}
void BFS(int v)
{
	int i;
	insert_q(v);
	state[v]=waiting;
	while(!is_Empty())
	{
		v=del_q();
		printf("%d ",v);
		state[v]=visited;
		for(i=0;i<n;i++)
		{
			if(adj[v][i]==1 && state[i]==initial)
			{
				insert_q(i);
				state[i]=waiting;
			}
		}
	}
}
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
	if(front==-1 || front>rear)
	  return 1;
	else
	return 0;
}
void create_graph()
{
	int j,i,max_edges,origin,destin;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	max_edges=n*(n-1);
	
	for(i=0;i<max_edges;i++)
	{
		printf("Enter edges %d(-1 -1 to quit):",i);
		scanf("%d %d",&origin,&destin);
		if((origin==-1) && (destin==-1))
		   break;
		if(origin >n || destin>n|| origin<0 ||destin<0)
		{
			printf("Invalid vertex:");
			i--;
		}
		else
		{
			adj[origin][destin]=1;
		}
	}
		printf("\n The Adjacency Matrix is:\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%4d",adj[i][j]);
		}
		printf("\n");
	}
	
}
