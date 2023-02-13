#include<stdio.h>
#include<stdlib.h>
void interchange(int a[], int n)
{
	int temp, i,j,index1=0,index2=0;
	int max=a[0];
	int min=a[0];
    for(i=0;i<n;i++)
    {
       if(a[i]<min)
       {
       	min=a[i];
       	index1=i;
	   }
	   if(a[i]>max)
	   {
	   	 max=a[i];
	   	 index2=i;
	   }
	}
	printf("min:%d ",min);
	printf("max:%d ",max);
	printf("Check");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]:",i);
    	printf("%d\n",a[i]);
    }
    
	temp=a[index1];
	a[index1]=a[index2];
	a[index2]=temp;
	
}
int main()
{
	int  i,size,a[1000];
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the array element:");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]:",i);
    	scanf("%d",&a[i]);
    }
    printf("Array is:\n");
   
    interchange(a,size);
	printf("Array after interchanging::\n");
     for(i=0;i<size;i++)
	{
		printf("arr[%d]:",i);
    	printf("%d\n",a[i]);
    }
	return 0;
}
