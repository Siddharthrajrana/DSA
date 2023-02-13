#include<stdio.h>
int main()
{
	int n,m,i,j;
	printf("Enter the size of first array");
	scanf("%d",&n);
     int arr1[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr1[i]);
	
	
		
	printf("Enter the size of second array");
	scanf("%d",&m);
	
	int s=n+m;
   int arr2[m];
   for(i=0;i<m;i++)
	scanf("%d",&arr2[i]);
	
	
	int arr3[n+m];
	i=0,j=0;
	int k=0;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		 arr3[k++]=arr1[i++];
		else if(arr1[i]>arr2[j])
		  arr3[k++]=arr2[j++];
		else
		  {
		  	arr3[k++]=arr2[j++];
		  	  i++;
		  }
	}
	

	while(i<n)
	arr3[k++]=arr1[i++];
	
	while(j<m)
	  arr3[k++]=arr2[j++];
	
	printf("Element is..\n");
	for(i=0;i<k;i++)
	  printf("%d ",arr3[i]);
	  
	return 0;
} 
