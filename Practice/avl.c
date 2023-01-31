#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

struct node 
{
    int data;
    int bf;
    struct node* left;
    struct node* right;
}*root= NULL;

typedef struct node node;
int height(node *root)
{
    if(root ==NULL) return -1;
    int x = height(root->left);
    int y = height(root->right);

    return (x>y?x+1:y+1);
}
node* createNode(int data)
{
    node*newNode;
    newNode= (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->bf=0;
    newNode->left = NULL;
    newNode->right= NULL;
    return newNode;

}
node *LLRotation(node *p)
{
    int lbf, rbf;
    node *pl = p->left;
    pl->bf = 0;
    p->left = pl->right;
    pl->right = p;
    lbf = height(p->left) + 1;
    rbf = height(p->right) + 1;
    p->bf = lbf - rbf;
    if (p == root)
        root = pl;
    return pl;
}
node *LRRotation(node *p)
{
    int lbf, rbf;
    node *pl = p->left;
    node *plr = pl->right;
    plr->bf = 0;

    p->left = plr->right;
    pl->right = plr->left;
    plr->left = pl;
    plr->right = p;
    lbf = height(p->left) + 1;
    rbf = height(p->right) + 1;
    p->bf = lbf - rbf;

    lbf = height(pl->left) + 1;
    rbf = height(pl->right) + 1;
    pl->bf = lbf - rbf;
    if (p == root)
        root = plr;
    return plr;
}
node *RRRotation(node *p)
{
    int lbf, rbf;
    node *pr = p->right;
    pr->bf = 0;
    p->right = pr->right;
    pr->left = p;
    lbf = height(p->left);
    rbf = height(p->right) + 1;
    p->bf = lbf - rbf;
    if (p == root)
        root = pr;
    return pr;
}
node *RLRotation(node *p)
{
    int lbf, rbf;
    node *pr = p->right;
    node *prl = pr->left;
    prl->bf = 0;

    p->right = prl->left;
    pr->left = prl->right;
    prl->right = pr;
    prl->left = p;
    lbf = height(p->left) + 1;
    rbf = height(p->right) + 1;
    p->bf = lbf - rbf;

    lbf = height(pr->left) + 1;
    rbf = height(pr->right) + 1;
    pr->bf = lbf - rbf;
    if (p == root)
        root = prl;
    return prl;
}
node* insertNode(node* root , int data)
{  
    int lbf,rbf;
    if (root == NULL) return createNode(data);
    if(data<root->data)
        root->left=insertNode(root->left,data);
    else if(data>root->data)
        root->right= insertNode(root->right, data);   

    lbf = height(root->left)+1;
    rbf = height(root->right)+1;
    root->bf = lbf-rbf;

    if(root->bf==2 && root->left->bf ==1)
        return LLRotation(root);
    if(root->bf==2 && root->left->bf==-1)
        return LRRotation(root);
    if(root->bf==-2 && root->right->bf==-1)
        return RRRotation(root);
    if(root->bf==-2 && root->right->bf==1)
        return RLRotation(root); 
    return root;
}
void inorder(node* root)
{
    if(root==NULL) return ;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
node* minValuedNode(node* root)
{
    node* temp = root;
    if(temp&&temp->left!=NULL)
        temp=temp->left;
    
    return temp;
}
node* DeleteNode(node* root ,int key)
{
    if(root==NULL) return root;
    if(key<root->data)
    {
       root->left= DeleteNode(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=DeleteNode(root->right,key);
    }
    else
    {
        if(root->left==NULL)
        {
            node* temp = root->right;
            free(root);
            return temp; 
        }
        else if(root->right==NULL)
        {
            node* temp = root->left;
            free(root);
            return temp;
        }
         node* temp =minValuedNode(root->right);
         root->data = temp->data;
         root->right=DeleteNode(root->right,temp->data);
    }
   

}

int main()
{
     int choice ;
    while(choice!=10)
    {
        printf("\n1. Insert Node ");
        printf("\n2. Inorder Traversal ");
        printf("\n3.Delete Node ");
        printf("\n4.Height ");
        printf("\nEnter your Choice :  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:{
                int data;
                printf("\nEnter the value to Insert : ");
                scanf("%d",&data);
                root = insertNode(root,data);
                printf("%d Inserted Successfully ");
                break;
            }
            case 2:{
                printf("\nInOrder Traversal : ");
                inorder(root);
                break;
            }
            case 3:{
                int key;
                printf("\nEnter the Key to Delete : ");
                scanf("%d",&key);
                root=DeleteNode(root,key);
                break;
            }
            case 4:{
                printf("\nHeight of the tree is %d",height(root));
                break;
            }
            case 10:{
                printf("\nExit Successfully ");
                break;
            }
            default:{
                printf("Please Enter the Valid Choice ");
            }
        }
    
    }
    
   return 0; 
}
