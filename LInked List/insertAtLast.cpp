#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first=NULL;

void insertAtLast(int val)
{  
   node *last;
   node *t=new node ;
   t->data = val;
   t->next = NULL;

   if(first==NULL)
   {
    first=last=t;
    last =t;
   }
   else{
    last->next =t;
    last =t;
   }

}
void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"  ";
        p=p->next;
    }
}
int main()
{
    int val;

        insertAtLast(5);
        insertAtLast(15);
        insertAtLast(25);
        insertAtLast(35);
        display(first);
        cout<<"\n";

   
    return 0;
}