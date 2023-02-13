#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

struct node 
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node Node;
Node *root = NULL;

Node* createNode(int );
Node* InsertNode(Node* , int );
Node* DeleteNode(Node*,int);
void inOrder(Node*);
bool Search(Node*,int);
int  Height(Node*);
int  countTotalNode(Node*);
int  countLeafNode(Node*);


int main()
{
    int choice ;
    
    while(choice!=10)
    {
        printf("\n1. Insert Node ");
        printf("\n2. Inorder Traversal ");
        printf("\n3. Search ");
        printf("\n4. Height ");
        printf("\n5. Delete Node ");
        printf("\n6. Count Total Node ");
        printf("\n7. Count Leaf Node ");
        printf("\n Enter your choice  : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:{
                int val;
                printf("Enter the value to Insert : ");
                scanf("%d",&val);
                root = InsertNode(root , val);
                printf("%d is Inserted ",val);
                break;
            }

            case 2:{
                printf("Inorder Traversal \n");
                inOrder(root);
                break;
            }

            case 3:{
                int key;
                printf("Enter the Key to Search: ");
                scanf("%d",&key);
                if (Search(root,key))
                    printf("%d is found ",key);
                else 
                    printf("%d is Not Found ",key);
                break;
            }

            case 4:{
                printf("\nHeight of the Tree is %d",Height(root));
                break;
            }

            case 5:{
                int key;
                printf("\nEnter the Key to Delete : ");
                scanf("%d",&key);
                DeleteNode(root , key );
                break;
            }

            case 6:{
                printf("\nTotal no. of Nodes in Tree is %d",countTotalNode(root));
                break;
            }

            case 7:{
                printf("\nTotal no. of Leaf node is %d",countLeafNode(root));
                break;
            } 
        }


    }
}

Node* createNode(int data)
{
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->lchild = NULL;
    newNode->rchild = NULL;

    return newNode;
}

Node* InsertNode(Node* root, int val)
{
    if(root == NULL ) return createNode(val);
    else if(root->data >val )
        root->lchild = InsertNode(root->lchild,val); 
    else 
        root->rchild =  InsertNode(root->rchild,val);
    
    return root ;
}
 
void inOrder(Node* p)
{
    if(p==NULL) return;
    inOrder(p->lchild);
    printf("%d ",p->data);
    inOrder(p->rchild);
}

bool Search(Node* p , int key)
{
    if(p==NULL) return false ;
    if(p->data==key) return true;
    else if(p->data > key ) return Search(p->lchild,key);
    else if(p->data < key )return Search(p->rchild ,key);
}
int Height(Node *p)
{
    int x , y;
    if(p==NULL) return -1;
    x = Height(p->lchild);
    y = Height(p->rchild);

    return x>y?x+1:y+1;
    
}
int countTotalNode(Node* p)
{
    int x , y;
    if(p == NULL )return 0;
    x = countTotalNode(p->lchild);
    y = countTotalNode(p->rchild);

    return x+y+1;
}
int countLeafNode(Node* p)
{   
    if(p==NULL) return 0;
    if(p->lchild == NULL && p->rchild==NULL)
        return 1;
    else{
        return countLeafNode(p->lchild) + countLeafNode(p->rchild);
    }
}
Node* InorderSuccesor(Node* p)
{
    while(p && p->lchild)
    {
        p = p->lchild;
    }

    return p;
}

Node* InordePredesor(Node* p)
{
    while(p&&p->rchild!=NULL)
    {
        p = p->rchild;
    }

    return p;
}

Node* DeleteNode(Node* p , int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root)
        {
            root=NULL;
        }
        free(p);
        return NULL;
    }

    if(key<p->data) DeleteNode(p->lchild , key);
    else if(key>p->data) DeleteNode(p->rchild , key);

    else{

        Node* q;
         if(Height(p->lchild)<Height(p->rchild))
         {
            q=InorderSuccesor(p->rchild);
            p->data = q->data ;
            p->rchild = DeleteNode(p->rchild, q->data);
         }
         else{
            q=InordePredesor(p->lchild);
            p->data= q->data;
            p->lchild = DeleteNode(p->lchild, q->data);
         }

    }
}