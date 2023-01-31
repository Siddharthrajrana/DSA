#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
 
struct node 
{
    int value ;
    struct node* lchild;
    struct node* rchild;
};

typedef struct node Node;
Node *root = NULL;

Node* createNode(int);
Node* insertNode(Node* ,int );
Node* deleteNode(Node* ,int );
Node* InOrderPredecor(Node*);
Node* InOrderSuccesor(Node*);
void preOrder(Node*);
void postOrder(Node*);
void inOrder(Node*);
int  Height(Node*);
bool Search(Node* , int);

int main()
{
    int choice;
    

    while(choice!=10)
    {
        printf("\n1. Insert Node ");
        printf("\n2. Delete Node ");
        printf("\n3. Preorder Traversal ");
        printf("\n4. Postorder Traversal ");
        printf("\n5. Inorder Traversal ");
        printf("\n6. Height of BST");
        printf("\n7. Search ");
        printf("\n   Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:{
                int value;
                printf("Enter the value to Insert:  ");
                scanf("%d",&value);
                root =insertNode(root,value); 
                break;
            }

            case 2:{
                int value;
                printf("Enter the value to Delete : ");
                scanf("%d",&value);
                deleteNode(root,value);
                break;
            }

            case 3:{
                printf("\n");
                preOrder(root);
                break;
            }

            case 4:{
                printf("\n");
                postOrder(root);
                break;
            }

            case 5:{
                printf("\n");
                inOrder(root);
                break;
            }

            case 7:{
                int value;
                printf("Enter the value to Search : ");
                scanf("%d",&value);
                if(Search(root,value))
                    printf("%d is Found ",value);
                else
                    printf("%d is not Found");

                break;
            }

            case 6:{
                printf("\nHeight of the BST is %d ",Height(root));
                break;
            }


            case 10:{
                printf("Ok Exit Successfull ");
                break;
            }

            default :
                printf("Please Enter the Valid Choice ");

        }

    }

    return 0;
}

bool Search (Node* p , int key)
{
    if (p == NULL) return false;
    if (key == p->value) return true;
    if (key < p->value)  return Search(p->lchild , key);
    if (key > p->value)  return Search(p->rchild , key);
}

Node* createNode(int value)
{
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->value=value;
    newNode->lchild=NULL;
    newNode->rchild=NULL;

    return newNode;
}

Node* insertNode(Node* root , int value)
{
    if( root==NULL ) return createNode(value);
    else if(value == root->value)
    {
        printf("Can't insert Duplicate Value ");
        return NULL;
    } 
    else if(value < root->value)
    {
        root->lchild = insertNode(root->lchild, value);
    }
    else 
    {
        root->rchild = insertNode(root->rchild , value);
    }

    return root;
}

int Height(Node* root)
{
    int x , y;
    if (root == NULL) return -1;
    x = Height(root->lchild);
    y = Height(root->rchild);

    return x>y?x+1:y+1;
}

Node* InOrderPredecor(Node* p)
{
    while(p && p->rchild!=NULL)
            p = p->rchild;

    return p;
}

Node* InOrderSuccesor(Node* p)
{
    while(p && p->lchild!=NULL)
        p = p->lchild;

    return p;
}
Node* deleteNode(Node* p, int value)
{
    if(Search(p,value))
    {
        if(p==NULL)
        { 
            return NULL;//if no tree is present 
        }
        if(p->lchild == NULL && p->rchild == NULL)
        {
             if(p==root)
             {
                 root =NULL;//if only root node is there 
             }
             free (p);
             return NULL;
         }
        if(value<p->value)
            p->lchild=deleteNode(p->lchild,value);
        else if(value>p->value)
            p->rchild=deleteNode(p->rchild,value);
        else{
            
            Node *q;
            if(Height(p->lchild)>Height(p->rchild))
            {
                q = InOrderPredecor(p->lchild);
                p->value = q->value;
                p->lchild = deleteNode(p->lchild,q->value); 
            }
            else
            {
                q = InOrderSuccesor(p->rchild);
                p->value = q->value;
                p->rchild = deleteNode(p->rchild,q->value); 
            }

        }
    }
    else 
        printf("Value is Not Found");

}

void preOrder(Node* root)
{
    if (root==NULL) return ;
    printf("%d ", root->value);
    preOrder(root->lchild);
    preOrder(root->rchild);
}

void postOrder(Node* root)
{
    if(root==NULL) return ;
    postOrder(root->lchild);
    postOrder(root->rchild);
    printf("%d ",root->value);
}

void inOrder(Node* root)
{
    if(root==NULL) return ;
    inOrder(root->lchild);
    printf("%d ",root->value);
    inOrder(root->rchild);
}