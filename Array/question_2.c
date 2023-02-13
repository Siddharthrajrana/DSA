#include<stdio.h>
int main()
{
	int i,size;
	float sum=0.0;
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
	 	sum+=arr[i];
	 }
	 printf("Average of array is %.2f",sum/size);
	 return 0;
}
	  
