#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first;

void createNode(int A[],int n)
{
    node *last,*temp;
    first= new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        temp=new node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void displayNode( struct node *p)
{
     while(p!=NULL)
     {
       cout<<p->data<<"  ";

       p=p->next;
     }   
     cout<<"\n";   
}
void insertNode(int pos,int val)
{
    node *t,*p;
    if(pos==0)//Insert at first or zero index
    {
        t=new node;
        t->data=val;
        t->next=first;
        first=t;
    }
    else if(pos>0)//Insert after any specific index 
    {
        p=first;
        //AND condition to check if the position is greater 
        //then size of list then iteration should stop just as it hits NULL or 0
        //if we enter invalid index then list remsin same 
        for(int i=0;i<pos-1&&p;i++)
          p=p->next;

        if(p)
        {
          t=new node ;
          t->data=val;
          t->next=p->next;
          p->next=t;
        }
    }
}
int main()
{
    int A[]={1,23,4,5,6,7,9,8};
    int n =sizeof(A)/sizeof(int);

    createNode(A,n);
   displayNode(first);
    //Insert According to index
    insertNode(0,43);
    //we can also create a link list using insert 
    insertNode(1,73);
    insertNode(2,53);
    insertNode(3,13);
    
    
    displayNode(first);


    return 0;
}