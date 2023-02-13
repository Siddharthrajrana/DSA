#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *lchild;
	struct node *rchild;
}*root=NULL;
#define COUNT 10
struct node *insert(struct node *ptr,int key)
{
	if(ptr==NULL)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->lchild=NULL;
		ptr->rchild=NULL;
		ptr->info=key;
	}
	else if( key <ptr->info)
	 ptr->lchild=insert(ptr->lchild,key);
	else if( key >ptr->info)
	 ptr->rchild=insert(ptr->rchild,key);
	 else 
	 printf("Duplicate Key:");
	 return ptr;
}
struct node *del(struct node *ptr,int key)
{
	struct node *temp,*succ;
	if(ptr==NULL)
	{
		printf("Key not found:");
		return;
	}
	else if( key <ptr->info)
	 ptr->lchild=del(ptr->lchild,key);
	else if( key >ptr->info)
	 ptr->rchild=del(ptr->rchild,key);
	 else
	 {
	 	if(ptr->lchild!=NULL&&ptr->rchild!=NULL)
	 	{
	 		succ=ptr->rchild;
	 		while(succ->lchild!=NULL)
	 		 succ=succ->lchild;
	 		 ptr->info=succ->info;
	 		 ptr->rchild=del(ptr->rchild,succ->info);
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
void print2d(struct node *ptr,int space)
{
	int i;
	if(ptr==NULL)
	  return;
	space+=COUNT;
   print2d(ptr->rchild,space);
   printf("\n");
   for(i=COUNT;i<space;i++)
     printf(" ");
    printf("%d\n",ptr->info);
   print2d(ptr->lchild,space);
}
void print(struct node *ptr)
{
	print2d(ptr,0);
}
struct node *max(struct node *ptr)
{
	while(ptr->rchild!=NULL)
	 ptr=ptr->rchild;
	 
	 return ptr;
}
int height(struct node *ptr)
{
	int x,y;
	if(ptr!=NULL)
	{
		x=height(ptr->lchild);
		y=height(ptr->rchild);
		return x+y+1;
	}
	return 0;
}
struct node *mirrorImage(struct node *tree)
{
  struct node *ptr;
  if(tree!=NULL)
  {
   mirrorImage(tree->lchild);
   mirrorImage(tree->rchild);
   ptr=tree->lchild;
   ptr->lchild = ptr->rchild;
   tree->rchild = ptr;
  }
  return tree;
}
int main()
{
	int choice,key;
	struct node *ptr;
	while(1)
	{
		printf("\n1.INsert");
		printf("\n2.Del");
		printf("\n3.print");
		printf("\n4.count");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter Item:");
				scanf("%d",&key);
				root=insert(root,key);
				break;
			case 2:
				printf("Enter key:");
				scanf("%d",&key);
				root=del(root,key);
				break;
			case 3:
				print(root);
			    break;
			case 4:
			    ptr=mirrorImage(root);
				//printf("Height:%d",height(root));
				break;
			case 5:
				exit(0);
				
		}
	}
}
