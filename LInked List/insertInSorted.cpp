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
void insertInSortedList(node *p, int val)
{
    node *t, *q = NULL;
    t = new node;
    t->data = val;
    t->next = NULL;
    
    //if there is no element in the list 
    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < val)
        {
            q = p;
            p = p->next;
        }
        //if there is only one element in the list
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        //for more then one element in the list
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 10};
    int n = sizeof(A) / sizeof(int);

    createSortedNode(A, n);
    display(first);

    insertInSortedList(first, 8);
    display(first);
}