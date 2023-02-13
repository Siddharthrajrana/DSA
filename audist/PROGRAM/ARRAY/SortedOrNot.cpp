#include<stdio.h>
int main()
{
	int arr[20],n,i,flag=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n-1;i++)
	{
		if((arr[i]>arr[i+1]))
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("Array is not sorted:");
	else
	printf("Array is  sorted");
	return 0;
	 
}
