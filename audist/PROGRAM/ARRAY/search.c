#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,key,size,sum,a[1000];
	printf("Enterthe size:");
	scanf("%d",&size);
	printf("enter no.");
	for(i=0;i<size;i++)
	{
    	scanf("%d",&a[i]);
    }
    printf("Enter the key to seach");
    scanf("%d",&key);
    
    for(i=0;i<size;i++)
    {
    	if(a[i]==key)
    	{
    		printf("key is found at index %d",i);
    		
    		exit(0);
		}
		
	}
	printf("Key is not found");
}
