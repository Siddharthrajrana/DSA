#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first;

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
    int v;
    while(1)
    {
    cout<<"Enter the element to insert : ";
    cin>>v;
    insertNode(0,v);
    displayNode(first);
    }


    return 0;
}