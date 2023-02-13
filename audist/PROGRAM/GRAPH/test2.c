#include<stdio.h>
#define MAX 100
int adj[MAX][MAX];
int main()
{
	int wt,i,j,origin,distin,edges,n;
	printf("Enter the number of vertex:");
	scanf("%d",&n);
	edges=n*(n-1);
	for(i=0;i<edges;i++)
	{
		printf("Enter the edges %d (-1 -1 to exit)",i);
		scanf("%d %d",&origin,&distin);
		if(origin==-1 || distin==-1)
		 break;
		if(origin>=n ||distin>=n ||origin<0 ||distin<0)
		{
			printf("Invalid vertex");
			i--;
		}
		else
		{
		//	printf("Enter their weight:");
		//	scanf("%d",&wt);
			adj[origin][distin]=1;
			
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n;j++)
		if(i==0)
		 printf("%4d",j);
		if (i==0&&)
		 printf("%4d",adj[i][j]);
		 
	  printf("\n");
	}
	
}
