#include<stdio.h>
#include<stdlib.h>
#define TEMP 0
#define PERM 1
#define NIL -1
#define infinity 999
struct edge{
	int u;
	int v;
};
#define MAX 100
int n;
int adj[MAX][MAX];
int status[MAX];
int pre[MAX];
int length[MAX];
void maketree(int r,struct edge tree[MAX]);
int min_temp();
void create_graph();
int main()
{
	int i,root,wt_tree=0;
	struct edge tree[MAX];
	create_graph();
	printf("Enter the root Vertex");
	scanf("%d",&root);
	maketree(root,tree);
	printf("Vertex included in spanning tree :");
	for(i=1;i<=n-1;i++)
	{
		printf("%d->",tree[i].u);
		printf("%d\n",tree[i].v);
		wt_tree+=adj[tree[i].u][tree[i].v];
	}
	printf("Weight %d",wt_tree);
}
void maketree(int r,struct edge tree[MAX])
{
	int count=0,current,i;
	for(i=0;i<n;i++)
	{
		pre[i]=NIL;
		length[i]=infinity;
		status[i]=TEMP;
	}
	length[r]=0;
	while(1)
	{
		current=min_temp();
		if(current==NIL)
		{
			if(count==n-1)
			  return;
		}
		status[current]=PERM;
		if(current!=r)
		{
			count++;
			tree[count].u=pre[current];
			tree[count].v=current;
		}
		for(i=0;i<n;i++)
		{
			if (adj[current][i]>0 && status[i]==TEMP)
			{
				if(adj[current][i]<length[i])
				{
					pre[i]=current;
					length[i]=adj[current][i];
				}
			}
		}
	}
}
int min_temp()
{
	int i;
	int min=infinity;
	int k=-1;
	for(i=0;i<n;i++)
	{
		if(status[i]==TEMP && length[i]<min)
		{
			min=length[i];
			k=i;
		}
	}
	return k;
}

void create_graph()
{
	int i,j,wt,edges,origin,distin;
	printf("Enter the number of vertex:");
	scanf("%d",&n);
	edges=n*(n-1);
	for(i=0;i<edges;i++)
	{
		printf("Enter the %d edges(-1 -1 to Exit)",i);
		scanf("%d%d",&origin,&distin);
		if(origin==-1||distin==-1)
		  break;
		printf("Enter the weight for this edge:");
		scanf("%d",&wt);
		if(origin>=n||origin<0||distin>=n||distin<0)
		{
			printf("Invalid");
			i--;
		}
		else
		{
			adj[origin][distin]=wt;
			adj[distin][origin]=wt;
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",adj[i][j]);
		}
		printf("\n");
	}
}
