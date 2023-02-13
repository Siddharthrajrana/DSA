#include<stdio.h>

int main()
{
	int i,n,j,arr[20];
	printf("Enter the size of first array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
    }
    j=0;
	for(int i=0;i<n-1;i++)
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
