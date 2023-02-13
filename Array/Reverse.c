#include<stdio. h>
#include<stdlib.h>
int main()
{
	int i,j,temp,size,a[1000];
	printf("Enterthe size:");
	scanf("%d",&size);
	printf("enter no.");
	for(i=0;i<size;i++)
	{
    	scanf("%d",&a[i]);
    }
    
    for(i=0,j=size-1;i<j;i++,j--)
    {
    	temp=a[i];
    	a[i]=a[j];
    	a[j]=temp;
		
	}
	
	printf("Array after reversing:\n");
	for(i=0;i<size;i++)
	printf("%d ",a[i]);
	
	return 0;
} 
