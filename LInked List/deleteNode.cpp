#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void createSortedNode(int A[], int size)
{
    struct node *last, *temp;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < size; i++)
    {
        temp = new node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << "  ";
        p = p->next;
    }cout<<"\n";
}
int deleteNode(node*p,int pos)
{
    node *q=NULL;
    int x=-1;
    p=first;

    if(pos==1)
    {
        x =first->data;
        first =first->next;
        delete p;
        return x;
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;

    }
    

}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 10};
    int n = sizeof(A) / sizeof(int);

    createSortedNode(A, n);
    display(first);

    cout<<"\nDeleted Element is : "<<deleteNode(first,4)<<"\n";

    
    display(first);
}