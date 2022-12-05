#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first;

void createNode(int A[],int n)
{
    node *last , *temp;
    first=(struct node*)malloc(sizeof(struct node));

    first->data=A[0];
    first->next=NULL;
    last=first;


    for(int i=1;i<n;i++)
    {
        temp = new node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void displayNode(struct node *p)
{
    p=first;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
//reverse the list using pointer 
void reverseList(node *p,int n)
{
    node *q=NULL;
    node *r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;

    cout<<"\n";
}
int main()
{
    int A[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(A)/sizeof(A[0]);
    createNode(A,n);
    displayNode(first);
    reverseList(first,n);
    displayNode(first);

    return 0;

}