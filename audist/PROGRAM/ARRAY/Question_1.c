#include<stdio.h>
int main()
{
	int i,size;
	 printf("Enter the size of array");
	 scanf("%d",&size);
	 int arr[size];
	 printf("Enter values :");
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 for(i=0;i<size;i++)
	 {
	 	printf("\n%d",arr[i]);
	 }
	 return 0;
	 
}
