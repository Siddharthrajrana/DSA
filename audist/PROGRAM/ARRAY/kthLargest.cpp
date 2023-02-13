#include<stdio.h>
int secondlargest(int arr[],int n,int k)
{
	int i,j,swap,temp;
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
	return arr[k-1];
}
int main()
{
	int arr[20],n,i,k;
	printf("Enetr the size of array");
	scanf("%d",&n);
	
	printf("Enter the array element:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("find the Kth largest element ");
	scanf("%d",&k);
	
	int kth=secondlargest(arr,n,k);
     printf("Kth largest element is: %d",kth);
     return 0;
}
