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
void removeDuplicate(node *p)
{
    node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else 
        {
            p->next=q->next;
            free(q);
            q= p->next;
        }
       
    }

}
int main()
{
    int A[] = {1, 1,1,2, 3,3,3,5,5, 4, 5, 60, 10};//when the duplicate element are not continous algo fails
    int n = sizeof(A) / sizeof(int);

    createSortedNode(A, n);
    display(first);


    removeDuplicate(first);
    display(first);

    
}