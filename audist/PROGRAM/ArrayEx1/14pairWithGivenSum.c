#include<stdio.h>
#define MAX 100
int main()
{
	int i,j,n,sum,arr[MAX];
	printf("Enter the size of array:");
	scanf("%d",&n);
   
	printf("Enter the array Element:\n");
	for(i=0;i<n;i++)
	{
	  printf("arr[%d]:",i);
	  scanf("%d",&arr[i]);
    }
    sum=50;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==sum)
			 printf("(%d ,%d)",arr[i],arr[j]);
		}
	}
	return 0;
	
}
/*
Enter the size of array:10
Enter the sum value:16
Enter the array Element:6
3
8
10
16
7
5
2
9
14
(6 ,10)(7 ,9)(2 ,14)*/
