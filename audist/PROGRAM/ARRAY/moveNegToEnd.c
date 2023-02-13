#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x=0,i,size,a[1000];
	
	printf("Enterthe size:");
	scanf("%d",&size);
	int temp[size];
	printf("enter no.");
	for(i=0;i<size;i++)
	{
    	scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
      if(a[i]>=0)
       temp[x++]=a[i];
	}
	  for(i=0;i<size;i++)
    {
      if(a[i]<0)
       temp[x++]=a[i];
	}
	
	for(i=0;i<size;i++)
    {
       a[i]=temp[i];
	}
	
	for(i=0;i<size;i++)
    {
      printf("%d ",a[i]);
	}
}
