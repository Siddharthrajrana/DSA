#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#define V 5



int mindistance(bool visited[],int dist[])
{
    int min_dist,min_index;
    min_dist = INT_MAX;
    min_index = 0;
    for(int v=0;v<V;v++)
    {
        if(visited[v]==false && dist[v]<=min_dist)
            min_dist = dist[v],
            min_index = v;
    }
    return min_index;
}

int djikstra(int g[V][V], int src)
{
    bool visited[V];
    
    int dist[V];
    for(int i=0;i<V;i++)
        visited[i] = false, dist[i] = INT_MAX;
    dist[src] = 0;
    for(int count=0;count<V;count++)
    {
        int u = mindistance(visited,dist);
        visited[u] = true;
        for(int v=0;v<V;v++)
        {
            if(!visited[v] && g[u][v] && g[u][v]+dist[u]<dist[v] && dist[u]!=INT_MAX)
                dist[v] = g[u][v] + dist[u];
        }
    }
    for(int i=0;i<V;i++)
    {
        printf("%d\t",dist[i]);
    }
}

void main()
{
    int g[V][V] = {
        {0,1,2,0,0},
        {1,0,1,0,5},
        {2,1,0,3,0},
        {0,0,3,0,3},
        {0,5,0,3,0}
    };
    
    djikstra(g,0);
}