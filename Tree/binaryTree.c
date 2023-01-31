#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};


void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
struct node *create()
{
    int x;
    struct node *newnode ;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data (enter -1 to no node)\n");
    scanf("%d", &x);
    if (x == -1)
    {   
        return NULL;
    }
    newnode->data = x;
    printf("\nenter the left child of %d", x);
    newnode->left = create();
    printf("\nenter the right child of %d", x);
    newnode->right = create();
    return newnode ;      
    
}
int main()
{   struct node *root;
    root = NULL;
    root = create();
    printf("\ninorder traversal:\n");
    inorder(root);
    printf("\npreorder traversal:\n");
    preorder(root);
    printf("\npostorder traversal:\n");
    postorder(root);
}