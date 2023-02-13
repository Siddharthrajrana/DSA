#include<stdio.h>
int main()
{
	int arr[20],i,pos,n,key;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	{
	  printf("arr[%d]:",i);
	  scanf("%d",&arr[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    pos=-1;
    for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			pos=i;
			break;
		}
		if(arr[i]>key)
		 break;
		
	}	
	if(pos==-1)
	 {
	 	printf("Element not found\n");
	 	return;
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
