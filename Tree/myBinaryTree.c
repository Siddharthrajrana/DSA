#include<stdio.h>
#include<stdlib.h>
#define COUNT 10

struct node
{
    int data ;
    struct node *left;
    struct node *right;
};

struct node* createTree();
void preOrder(struct node *root);
void print2D(struct node *root);
void printFun(struct node *root , int space );
int findHeight(struct node *root);

int main()
{
   int choice ,data ;
   struct node *root = NULL;


   while(choice != 5)
   {
      printf("\n1.Create Binary Tree ");
      printf("\n2.Inorder Traversal");
      printf("\n3.Print Tree ");
      printf("\nEnter your choice : ");
      scanf("%d",&choice);

      switch (choice)
      {
            case 1:
                root = createTree();
                break;
            
            case 2:
                preOrder(root);
                break;

            case 3:
                //print2D(root);
                break;
            
            case 4:
                printf("The height of the tree is %d",findHeight(root));
                break;


            case 5:
                printf("OK Exit Successfully ");
                break;

            default:
                printf("Please Enter the valid Choice ");
            


      }
   }
}

struct node * createTree()
{
    int data;
    struct node *newNode = (struct node *)malloc(sizeof(struct node ));

    printf("\nEnter the data to Create node or -1 to exit  : ");
    scanf("%d",&data);

    if(data==-1)
    {
        return NULL;
    }
    newNode->data = data;
    printf("\nEnter the left Child of %d",data);
    newNode->left =createTree();
    printf("\nEnter the right Child of %d",data); 
    newNode->right = createTree();
    return newNode;
}




void preOrder(struct node *p)
{
    if(p==NULL)
    {
        return ;
    }
    printf("%d ",p->data);
    preOrder(p->left);
    preOrder(p->right);
}
int max(int a ,int b)
{
    return a>b?a:b;
}
int findHeight(struct node *root) {
	if (root == NULL) return -1;
	return max(findHeight(root->left),findHeight(root->right)) + 1;
}
