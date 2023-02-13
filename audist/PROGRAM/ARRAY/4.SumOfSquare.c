#include<stdio.h>
#define MAX 100
int main()
{
	int i,n,sum=0,arr[MAX];
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		sum+=arr[i]*arr[i];
	}
	printf("Sum: %d",sum);
	return 0;
}
