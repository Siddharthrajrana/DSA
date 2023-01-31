#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

struct node 
{
    int data;
    struct node* left;
    struct node* right;
};

typedef struct node Node ;
Node* root = NULL;

Node* CreateNode(int);
Node* InsertNode(Node*,int);
Node* DeleteNode(Node*,int);
void Inorder(Node*);

int main()
{
    int choice ;
    while(choice!=10)
    {
        printf("\n1. Insert Node ");
        printf("\n2. Inorder Traversal ");
        printf("\n3.Delete Node ");
        printf("\nEnter your Choice :  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:{
                int data;
                printf("\nEnter the value to Insert : ");
                scanf("%d",&data);
                root = InsertNode(root,data);
                printf("%d Inserted Successfully ");
                break;
            }
            case 2:{
                printf("\nInOrder Traversal : ");
                Inorder(root);
                break;
            }
            case 3:{
                int key;
                printf("\nEnter the Key to Delete : ");
                scanf("%d",&key);
                root=DeleteNode(root,key);
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
Node* CreateNode(int data)
{
    Node* NewNode;
    NewNode = (Node*)malloc(sizeof(Node));
    NewNode->data = data;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}
Node* InsertNode(Node* root , int data)
{
    if (root==NULL) return CreateNode(data);
    else if(data<root->data) root->left = InsertNode(root->left , data);
    else if(data>root->data) root->right= InsertNode(root->right , data);
    return root;
}
void Inorder(Node* root)
{
    if(root==NULL) return ;
    Inorder(root->left);
    printf("%d ",root->data);
    Inorder(root->right);
}
Node* minValuedNode(Node* root)
{
    Node* temp = root;
    if(temp&&temp->left!=NULL)
        temp=temp->left;
    
    return temp;
}
Node* DeleteNode(Node* root ,int key)
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
            Node* temp = root->right;
            free(root);
            return temp; 
        }
        else if(root->right==NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }
         Node* temp =minValuedNode(root->right);
         root->data = temp->data;
         root->right=DeleteNode(root->right,temp->data);
    }
   

}