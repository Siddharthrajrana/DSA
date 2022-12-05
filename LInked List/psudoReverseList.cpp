#include<stdio.h>
#include<stdlib.h>
//reversed list using recurssion

struct node
{
  int data;
  struct node *next;
}*first=NULL;

void createNode(int A[],int n)
{
  struct node *temp,*last;
  first = (struct node*)malloc(sizeof(struct node));
  first->data=A[0];
  first->next=NULL;
  last=first;

  for(int i=1;i<n;i++)
  {
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=A[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
  }
}
void display(struct node *p)
{ 
  /*if(p!=NULL)
  { 
   
    printf("%d ",p->data);
    display(p->next);
    
  }*/

  if(p!=NULL)
  { 
    display(p->next);
    printf("%d ",p->data);
    //if we want to display list in regular order then 
    //write display(function) after print statement 
  }
}

int main()
{
  int A[]={1,2,3,4,5,6,7,8,9,10};
  createNode(A,10);
  display(first);
}