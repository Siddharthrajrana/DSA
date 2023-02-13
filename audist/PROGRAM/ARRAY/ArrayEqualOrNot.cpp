#include<stdio.h>
int main()
{
	int i,n,j,m,arr[20],arr1[20],count=0;
	printf("Enter the size of first array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
    }
	printf("\n Enter the size of second array:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			if(arr[i]==arr1[j])
			{
				count++;
				break;
			}
		}
	}
	if(( count==n)&&(count==m))
	{
		printf("array is same:");
	}
	else
	{
		printf("Array is note same:");
	}
	return 0;
}
