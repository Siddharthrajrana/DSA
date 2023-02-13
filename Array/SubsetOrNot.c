#include<stdio.h>
int issubset(int arr1[],int arr2[],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		
		  if(arr2[i]==arr1[j])
		     break;
	    }
	    if(j==n)
	return 0;
	}
	return 1;
	
}
int main()
{
	int i,n,j,m,arr1[20],arr2[20],count=0;
	printf("Enter the size of first array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
    }
	printf("\n Enter the size of second array:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
	}
	if(issubset(arr1,arr2,n,m))
	  printf("arr2[] is subset of arr1[]");
	else
	  printf("arr2[] is not subset of arr1[]");
}
