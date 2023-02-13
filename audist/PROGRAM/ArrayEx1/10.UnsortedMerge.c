#include<stdio.h>
int main()
{
	int n,m,i,j,temp,swap;
	printf("Enter the size of first array");
	scanf("%d",&n);
     int arr1[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr1[i]);
	
	
		
	printf("Enter the size of second array");
	scanf("%d",&m);
	

   int arr2[m];
   for(i=0;i<m;i++)
	scanf("%d",&arr2[i]);
	int k=0;
	int s=n+m;
	int arr3[n+m];
	for(i=0;i<s;i++)
	{
		if(i<n)
		arr3[i]=arr1[i];
		else
		{
		  arr3[i]=arr2[k];
		  k++;
	    }
	}
	for(i=0;i<s-1;i++)
	{
		swap=0;
		for(j=0;j<s-i-1;j++)
		{
			if(arr3[j]>arr3[j+1])
			{
				temp=arr3[j];
				arr3[j]=arr3[j+1];
				arr3[j+1]=temp;
				swap++;
			}
		}
		if(swap==0)
		 break;
	}
	printf("Array after merging..\n");
	for(i=0;i<s;i++)
	{
		printf("%d ",arr3[i]);
	}
	return 0;
} 
