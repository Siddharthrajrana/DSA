#include<stdio.h>
#include<stdlib.h>
#define COUNT 10
struct node{
	struct node *lchild;
	int data;
	struct node *rchild;
}*root=NULL;
struct node *insert(struct node *ptr,int item)
{
	if(ptr==NULL)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->lchild=NULL;
		ptr->data=item;
		ptr->rchild=NULL;
	}
	else if( item <ptr->data)
	 ptr->lchild=insert(ptr->lchild,item);

	else if(item > ptr->data)
	  ptr->rchild=insert(ptr->rchild,item);

	else
	 printf("\nDuplicate key:");
	return ptr;
}
struct node *del(struct node *ptr,int key)
{
	struct node *temp,*succ;
	if(ptr==NULL)
	 {
	 	printf("Key not Found");
	 	return ;
	 }
	else if(key < ptr->data)
	ptr->lchild=del(ptr->lchild,key);
	else if(key > ptr->data)
	 ptr->rchild=del(ptr->rchild,key);
	else
	{
		if(ptr->lchild!=NULL&&ptr->rchild!=NULL)
		{
			succ=ptr->rchild;
			while(succ->lchild!=NULL)
			  succ=succ->lchild;
			ptr->data=succ->data;
			ptr->rchild=del(ptr->rchild,succ->data);
		}
		else
		{
			temp=ptr;
			if(ptr->lchild!=NULL)
			 ptr=ptr->lchild;
			else if(ptr->rchild!=NULL)
			  ptr=ptr->rchild;
			else
			  ptr=NULL;
			free(temp);
		}
	}
	return ptr;
}
void inorder(struct node *ptr)
{
	if(ptr==NULL)
	 return;
	inorder(ptr->lchild);
	printf("%d ",ptr->data);
	inorder(ptr->rchild);
}
void print2d(struct node *root,int space)
{
	int i;
	if(root==NULL)
	   return;
	space+=COUNT;
	print2d(root->rchild,space);
	printf("\n");
	for(i=COUNT;i<space;i++)
	  printf(" ");
	printf("%d\n",root->data);
	print2d(root->lchild,space);
	
}
void print(struct node *root)
{
	print2d(root,0);
}
int count(struct node *ptr)
{
	int x,y;
	if(ptr!=NULL)
	{
		x=count(ptr->lchild);
		y=count(ptr->rchild);
		return x+y+1;
	}
	return 0;
}
int main()
{
	int choice,item;
	while(1)
	{
		printf("\n1.Insert:");
		printf("\n2.Display");
		printf("\n3.print");
		printf("\n4.Del");
		printf("\n5.Count");
		printf("\n6.Exit:");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				printf("Enter the item :");
				scanf("%d",&item);
				root=insert(root,item);
				break;
			case 2:
				printf("Inorder traversal:");
				inorder(root);
			case 3:
				print(root);
				break;
			case 4:
				printf("Enter the key to delete:");
				scanf("%d",&item);
				root=del(root,item);
				break;
			case 5:
				printf("Total Node:%d",count(root));
				break;
			case 6:
				exit(0);
		}
	}
}
