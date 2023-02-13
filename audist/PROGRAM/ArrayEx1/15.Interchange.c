#include<stdio.h>
#define MAX 100
int main()
{
	int i,j,n,temp,arr[MAX];
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter the array Element:\n");
	for(i=0;i<n;i++)
	{
	  printf("arr[%d]:",i);
	  scanf("%d",&arr[i]);
    }
    
    temp=arr[1];
    arr[1]=arr[n-2];
    arr[n-2]=temp;
    
    printf("Array after interchanging::\n");
     for(i=0;i<n;i++)
	{
		printf("arr[%d]:",i);
    	printf("%d\n",arr[i]);
    }
    return 0;
}
/*
Enter the size of array:5
Enter the array Element:
arr[0]:2
arr[1]:3
arr[2]:4
arr[3]:5
arr[4]:6
Array after interchanging::
arr[0]:2
arr[1]:5
arr[2]:4
arr[3]:3
arr[4]:6
*/
