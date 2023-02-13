#include<stdio.h>
int heapn=0;
int heap[50];
int gap=1;
int display(int n,int i,int space)
{
    int j,left,right;
    if(i<n)
    {
        left=(2*i)+1;
        right=(2*i)+2;
        space=space+gap;
        display(n,right,space);
        printf("\n");
        for(j=gap;j<space;j++)
        {
            printf("\t");
        }
        printf("%d\n",heap[i]);
        display(n,left,space);
    }

}
int main()
{
    int n,a,b,min,i,j,v,u,mincost=0;
    int ne=1;
    int cost[10][10];
    int visited[10];
    for(i=0;i<10;i++)
    {
        visited[i]=0;
    }
    printf("\nEnter the number of nodes = ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix =\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            cost[i][j]=999;
        }
    }
    visited[1]=1;
    printf("\n");
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    if(visited[i]!=0)
                    {
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
            }

        }
                            if(visited[u]==0 || visited[v]==0)
        {
            printf("\nEdge %d(%d,%d) mincost =%d",ne++,a,b,min);
            mincost=min+mincost;
            visited[b]=1;
            heap[heapn++]=min;
            display(heapn,0,0);
        }
        cost[a][b]=cost[b][a]=999;

    }

}
