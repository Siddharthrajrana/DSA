//rev element of array using starck
#include<stdio.h>
int stack[10];
int top=-1;
int push(int item)
{
	stack[++top]=item;
}
int pop()
{
	return (stack[top--]);
}
int main()
{
	int i,n;
	int arr[10];
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array element:");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	 
	 for(i=0;i<n;i++)
	  push(arr[i]);
	 
	  for(i=0;i<n;i++)
	   {
	    	int item=pop();
	    	arr[i]=item;
		}
	printf("After Rev:");
	for(i=0;i<n;i++)
	  printf("%d ",arr[i]);
	  
	return 0;
}
