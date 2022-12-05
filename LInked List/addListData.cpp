#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first=NULL;

void createNode(int A[],int n)
{
    struct node *last , *temp;

    first = (struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last= first;

    for(int i=1;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node ));
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
int addData(struct node *p)
{
    if(p==NULL)
      return 0;
    else 
      return addData(p->next)+p->data;
}
int main()
{
    int A[]={1,2,3,4,5,6,7,8,9,10};
    createNode(A,10);
    cout<<"Sum of the list element is : "<<addData(first);

    return 0;
}