#include<stdio.h>
int main()
{
	int arr[20],i,pos,n,item;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	{
	  printf("arr[%d]:",i);
	  scanf("%d",&arr[i]);
    }
	printf("Enter the item to be inserted:");
	scanf("%d",&item);
	
	printf("Enter the position to be Inserted:");
	scanf("%d",&pos);
	if(pos>n)
	{
		printf("Invaliad position::");
		return 0;
	}
	for(i=n-1;i>=pos;i--)
	 arr[i+1]=arr[i];
	 
	arr[pos]=item;
	n++;
	
	printf("Array after Insertion:\n");
	for(i=0;i<n;i++)
	{
	 printf("arr[%d]:",i);
	 printf("%d\n",arr[i]);
     }
	return 0;
}
