#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    
    node(int val)
    {
        data= val;
        left =NULL;
        right=NULL;

    }
};

node* insertBST(node *root,int val)
{
    if(root==NULL)
    {
       return new node(val);
    }
    if(root->data>val)
    {
        root->left=insertBST(root->left,val);
    }
    else 
    {
        root->right=insertBST(root->right ,val);
    }
    return root;
}
void preOrder(node *root)
{
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
