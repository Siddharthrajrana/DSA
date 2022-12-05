#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void createNode(int A[], int n)
{
    struct node *last, *temp;

    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
/*struct node* search(struct node *p,int key)
{
    if (p == NULL)
        return NULL;
    if(key==p->data)
        return p;

        return search(p->next,key);
}*/
struct node* search(struct node *p,int key)
{
    struct node *q=NULL;
    while(p!=NULL)
    {   
         q=p;
        if(p->data==key)
        {
             q->next=p->next;
             p->next=first;
             first=p;
             return p;
        }
       
        p=p->next;
    }
    return NULL;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    createNode(A, 10);
    if(search(first,10))
    {
        struct node  *n= search(first,10);
        cout << "Element is : " << n->data<<"  Found ";
    }
    else 
        cout<<"Element not found .";

    return 0;
}