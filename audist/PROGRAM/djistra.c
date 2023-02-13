#include<stdio.h>
#include<conio.h>
# define max 10
# define infinity 9999
void djistra (int G[max][max],int n , int startnode)
{
    int cost[max][max],visited[max],distance[max],pred[max],adj[max][max]={0};
    int nextnode,i,j,k,l,p,q,m,o,mindistance,count,d,flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(G[i][j]==0)
            cost[i][j]=infinity;
            else
            cost[i][j]=G[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        distance[i]=cost[startnode][i];
        pred[i]=startnode;
        visited[i]=0;
    }
    distance[startnode]=0;
    visited[startnode]=1;
    count=1;
    while(count<n-1)
    {
        mindistance=infinity;
        for(i=0;i<n;i++)
        {
            if(distance[i]<mindistance&&!visited[i])
            {
                mindistance=distance[i];
                nextnode=i;

            }
        }
        visited[nextnode]=1;
        for(i=0;i<n;i++)
        {
            if(!visited[i])
            if(mindistance+cost[nextnode][i]<distance[i])
            {
                distance[i]=mindistance+cost[nextnode][i];
                pred[i]=nextnode;
            }
        }
        count++;
    }
    while(d!=-1)
    {
        printf("Enter the destination:");
        scanf("%d",&d);

    flag=0;
    for(i=0;i<n;i++)
    {
        
        if(i==d)
        {
            flag=1;
        if(i!=startnode)
        {
            if(distance[i]==9999)
            printf("path does not exists:");
            else
            {
            printf("Path exists");
            printf("\n Shortest distance %d = %d",i,distance[i]);
            printf("\n Paths is : %d",i);
            j=i;
            o=i;
            while(j!=startnode)
            {
                j=pred[j];
                printf("<--%d",j);
                m=j;
                adj[m][o]=G[m][o];
                o=j;
            }
             printf("the represenation of adjacency matrix is:\n");
    printf("\\\\");
    for(p=0;p<n;p++)
    printf("\t%c",64+p+1);
    printf("\n");
    for(p=0;p<n;p++)
    {
        printf("%c\t",64+p+1);
        for(q=0;q<n;q++)
        {
            printf("%d\t",adj[p][q]);
        }
        printf("\n");
    }
    for(k=0;k<n;k++)
    {
        for(l=0;l<n;l++)
        {
            adj[k][l]=0;
        }
    }
   
        }
        }
    }
    }
     if(flag==0)
    printf("Invalid position");
   
}
}
void main()
{
    int G[max][max],i,n,u,j;
    printf("Enter the number of vertices");
    scanf("%d",&n);
    printf("Enter the adjacency matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&G[i][j]);
        }
    }
    printf("the represenation of adjacency matrix is:\n");
    printf("\\\\");
    for(i=0;i<n;i++)
    printf("\t%c",64+i+1);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c\t",64+i+1);
        for(j=0;j<n;j++)
        {
            printf("%d\t",G[i][j]);
        }
        printf("\n");
    }
    printf("Enter the source vertx");
    scanf("%d",&u);
    djistra(G,n,u);
}