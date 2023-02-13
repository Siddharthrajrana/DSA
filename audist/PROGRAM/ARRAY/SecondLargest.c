#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,size,a[1000];
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the array element:");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]:",i);
    	scanf("%d\n",&a[i]);
    }
    int max1=a[0];
	int max2=a[0];
    for(i=0;i<size;i++)
    {
       if(a[i]>max1)
       {
       	max2=max1;
       	max1=a[i];
	   }
	   else if(a[i]>max2)
	   {
	   	max2=a[i];
	   }
	}
	printf("Second Largest Element is %d",max2);
	return 0;

}
