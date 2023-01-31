#include<stdio.h>
#define MAX 100
int adj[MAX][MAX];
int n;
void display();
int main()
{
	int max_edges,i,j,origin,destin,count=0;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	   max_edges=n*(n-1);
	for(i=1;i<=max_edges;i++)
	{
		printf("Enter edges %d(-1 -1 to quit):",i);
		scanf("%d %d",&origin,&destin);
		if((origin==-1) && (destin==-1))
		   break;
		if(origin >=n || destin>=n|| origin<0 ||destin<0)
		{
			printf("Invalid vertex:");
			i--;
		}
		else
		{
			adj[origin][destin]=1;
			adj[destin][origin]=1;
			count++;
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
	printf("possible spanning tree is:\n");
	adj[0][3]=0;
	adj[3][0]=0;
	display();
	adj[0][3]=1;
	adj[3][0]=1;
	
	adj[0][2]=0;
	adj[2][0]=0;
	display();
	adj[0][2]=1;
	adj[2][0]=1;
	
	adj[2][3]=0;
	adj[3][2]=0;
	display();
	
	
}

void display()
{
	int i,j;
	printf("\n");
  for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%4d",adj[i][j]);
		}
		printf("\n");
	}	
}
