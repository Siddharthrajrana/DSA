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
int isSorted(node *p)
{
    int x =-23654789;
    p=first;
    while(p!=NULL)
    {
        if(x>p->data)
           return false ;

        x=p->data;
        p=p->next;   
    }
       
    return true;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 60, 10};
    int n = sizeof(A) / sizeof(int);

    createSortedNode(A, n);
    display(first);

    if(isSorted(first))
       cout<<"Sorted ";
    else 
       cout<<"Unsorted ";


}