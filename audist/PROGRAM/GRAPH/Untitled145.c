#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define initial 1
#define waiting 2
#define visited 3
void BF_t();
int state[MAX];
void insert_q(int v);
void BFS1(int v);
void BF_t();
int q[MAX],front=-1,rear=-1;
int adj[MAX][MAX];
int n,i,p,j;
int del();
void display();
void create();
int is_Empty();
int main()
{
  create();
 display();
 
 BF_t();
 
   
}
void BFS1(int v)
{
 printf("+++");
  insert_q(v);
  state[v]=waiting;
  while(!is_Empty())
  {
    v=del();
    printf("%d ",v);
    state[v]=visited;
    for(i=0;i<n;i++)
    {
     if(adj[v][i]==1 && state[i]==initial)
     {
      insert_q(i);
      state[v]=waiting;
     }
    }
  }
}

void create()
{
  int e,o,d;
  printf("Enter the no of vertex");
  scanf("%d",&n);
  
  e=n*(n-1);
  for(i=0;i<e;i++)
  {
    printf("Enter the edges %d(-1 -1 to Exit)",i);
    scanf("%d%d",&o,&d);
    if(o==-1 || d==-1)
        break;
     else
     {
       adj[o][d]=1;
     }
  }
}
void display()
{
  int j;
  for(i=0;i<n;i++)
   printf("%4d",i);
   printf("\n");
   for(i=0;i<n;i++)
   {
     printf("%d",i);
     for(j=0;j<n;j++)
       printf("%4d",adj[i][j]);
       
      printf("\n");
   }
   //
}

void insert_q(int v)
{
  if(front==-1)
    front=0;
     rear++;
    
    q[rear]=v;
}

int del()
{
  int v=q[front];
   front++;
  return v;
}


int is_Empty()
{ 
  if(front==-1)
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


void BF_t()
{

  int v,m;
  for(v=0;v<n;v++)
  {
    state[v]=initial;
   }
  // int p;
   printf("Enter starting vertex");
   scanf("%d",&p);
   printf("%d",p);
   
   BFS1(p);
}
