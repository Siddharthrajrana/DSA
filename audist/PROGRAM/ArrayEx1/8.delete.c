#include<stdio.h>
int main()
{
	int arr[20],i,pos,n,item;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	{
	  printf("arr[%d]:",i);
	  scanf("%d",&arr[i]);
    }
	
	printf("Enter the position:");
	scanf("%d",&pos);
	if(pos>n)
	{
		printf("Invaliad position::");
		return 0;
	}
	
	for(i=pos;i<n-1;i++)
	 arr[i]=arr[i+1];
	 
	n--;
	
	printf("Array after Deletion:\n");
	for(i=0;i<n;i++)
	{
	 printf("arr[%d]:",i);
	 printf("%d \n",arr[i]);
    }
}
