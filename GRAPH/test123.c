#include<stdio.h>
#define MAX 100
int n;
int adj[MAX][MAX];
#define TEMP 0
#define PREM 1
#define NIL -1
#define infinity 999
int pre[MAX];
int pathlength[MAX];
int status[MAX];
void create_graph()
{
	int wt,j,i,max_edges,origin,destin;
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
			printf("Enter the weight:");
		    scanf("%d",&wt);
			adj[origin][destin]=wt;
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
void Dijstra(int s)
{
	int current,i;
	for(i=0;i<n;i++)
	{
		pre[i]=NIL;
		pathlength[i]=infinity;
		status[i]=TEMP;
	}
	pathlength[s]=0;
	while(1)
	{
		current=min_temp();
		if(current==NIL)
		  return;
		status[current]=PREM;
	   for(i=0;i<n;i++)
	   {
	   	if(adj[current][i]!=0 && status[i]==TEMP)
	   	{
	   	   if(pathlength[current]+adj[current][i]<pathlength[i])
			{
				pre[i]=current;
				pathlength[i]=pathlength[current]+adj[current][i];
			  	
			}	
		}
	   }
	}
}
void findpath(int s,int v)
{
	int j,i,u,count=0,sd=0,path[MAX];
	int adj1[MAX][MAX]={0};
	while(v!=s)
	{
		count++;
		path[count]=v;
		u=pre[v];
		adj1[u][v]=adj[u][v];
		sd+=adj[u][v];
		v=u;
	}
	printf("\n The Adjacency Matrix is:\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%4d",adj1[i][j]);
		}
		printf("\n");
	}
	count++;
	path[count]=s;
	printf("\nThe path is:");
	for(i=count;i>=1;i--)
	  printf("%d ",path[i]);
	  
	printf("\nThe shortest distance is:%d",sd);
}
int min_temp()
{
	int k=-1,i,min=infinity;
	for(i=0;i<n;i++)
	{
		if(status[i]==TEMP && pathlength[i]<min)
		{
			min=pathlength[i];
			k=i;
		}
	}
	return k;
}
int main()
{
	int s,v;
	create_graph();
	printf("Enter the source Vertex:");
	scanf("%d",&s);
	Dijstra(s);
	while(1)
	{
		printf("Enter the destination vertex:(-1 to Exit:)");
		scanf("%d",&v);
		if(v==-1)
		  break;
		else if(v<0 ||v>=n)
		printf("Vertex does not Exit:");
		else if(v==s)
		 printf("The source and destination vertex are same");
		 else if(pathlength[v]==infinity)
		  printf("There is no path between source to destination:");
		else findpath(s,v);
	}
}
