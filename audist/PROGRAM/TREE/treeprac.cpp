#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *getnode(int n);
struct node *insert(struct node* root,int n)
{
	
	if(root==NULL)
	{
    return getnode(n); 
    }
    if(root->data<n)
    {
    	root->left=insert(root->left,n);
	}
	if(root->data>n)
	{
		root->right=insert(root->right,n);
	}
	return root;
}
struct node *root,*fresh,*temp;
struct node *getnode(int n)
{
    fresh=(struct node*) malloc(sizeof(struct node));
    fresh->data=n;
    fresh->left=NULL;
    fresh->right=NULL;
    return fresh;
}
void display(struct node *root)
{
	if(root!=0)
	{

printf("%d  ",root->data);
display(root->left);
display(root->right);
}
}
int main()
{
    root=NULL;
   // getnode(10);
    root=insert(root,8);
    root=insert(root,6);
     root=insert(root,10);
    root=insert(root,5);
     root=insert(root,7);
    root=insert(root,9);
     root=insert(root,11);
     
    display(root);
}
