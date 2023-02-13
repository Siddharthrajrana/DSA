#include<stdio.h>
int smallest(int arr[],int n)
{
	int i;
	int min=arr[0];
    for(i=0;i<n;i++)
    {
       if(arr[i]<min)
       {
       	min=arr[i];
	   }
	}
	return min;
}
int main()
{
	int i,size;
	 printf("Enter the size of array::");
	 scanf("%d",&size);
	 int arr[size];
	 printf("Enter values :");
	 for(i=0;i<size;i++)
	 {
	 	printf("arr[%d]:",i);
	 	scanf("%d",&arr[i]);
	 }
	 int num=smallest(arr,size);
	 printf("Smallest is:%d ",num);
	 return 0;
	 
}
