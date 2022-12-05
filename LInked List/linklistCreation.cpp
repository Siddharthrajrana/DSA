#include<iostream>
using namespace std ;

class Node
{
    private:
    int data ;
    Node *next;

    public:
    Node *last ,*first, *temp;
    
    void createNode()
    {
      
      int A[]={1,2,3,4,5,6,7,8,9,10};
      int n=sizeof(A)/sizeof(int);
      first = new Node ;
      
      first->data=A[0];
      first->next=NULL;
      last=first;

      for(int i=1;i<n;i++)
      {
        temp =new Node ;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
      }
       
    } 
    void displayNode()
    {
        Node *p=first;
       while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
       
    }
}a;
int main()
{
    
    a.createNode();
    a.displayNode();
    return 0;
}