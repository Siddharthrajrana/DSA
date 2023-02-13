#include<stdio.h>
void square(int arr[],int n)
{
	int i;
	printf("Array is:\n");
	for(i=0;i<n;i++)
	 {
	 	printf("arr[%d]:",i);
	 	printf("%d\n",arr[i]*arr[i]);
	 }
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
	 square(arr,size);
	 return 0;
	 
}
