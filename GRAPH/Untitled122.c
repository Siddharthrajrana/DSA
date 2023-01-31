#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int adj[MAX][MAX];
void display();
int n;
int main()
{
	int i,j,o,d,count=0;
	printf("Enter the no Of vertex:");
	scanf("%d",&n);
	int e=n*(n-1);
	for(i=0;i<e;i++)
	{
		printf("Enter the %d edges(-1 -1 to exit)",i);
		scanf("%d%d",&o,&d);
		if(o==-1 || d==-1)
		 break;
		adj[o][d]=1;
		count++;
	}
	display();
	degree();
	printf("Total edges:%d",count);
}
void display()
{
	int i,j;
	for(i=0;i<n;i++)
	 printf("%4d",i);
	 printf("\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",i);
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%4d",adj[i][j]);
	 		
		 }
		 printf("\n");
	 }
}
void degree()
{
	int i,j,d=0,od=0;
for(i=0;i<n;i++)
{
	d=0;
	od=0;
	for(j=0;j<n;j++)
	{
	  if(adj[j][i]==1)
	 	   d++;
	  if(adj[i][j]==1)
	      od++;
	 		
	}
    printf("\nIn(%d):%d",i,d);
    printf(" out(%d):%d",i,od);
}
}
