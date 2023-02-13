#include<stdio.h>
#define MAX 100
int main()
{
	int swap,i,j,temp,n,sum,arr[MAX];
	printf("Enter the size of array:");
	scanf("%d",&n);

	printf("Enter the array Element:");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	  
	for(i=0;i<n-1;i++)
	{
		swap=0;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
				swap++;
			}
		}
		if(swap==0)
		 break;
	}
	 j=0;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			arr[j++]=arr[i];
		}
	}
	arr[j++]=arr[n-1];
	printf("Array after removing duplicate:\n");
	for(i=0;i<j;i++)
	  printf("%d ",arr[i]);
  return 0;
}
