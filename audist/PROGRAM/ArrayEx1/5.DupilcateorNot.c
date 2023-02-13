#include<stdio.h>
int main()
{
	int i,size,index=0,j,flag=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]:",i);
    	scanf("%d",&a[i]);
    }
    
    for(i=0;i<size-1;i++)
    {
    	for(j=i+1;j<size;j++)
    	{
    		if(a[i]==a[j])
    		 {
    		 	flag=1;
    		 	break;
			 }
		}
	}
	if(flag==1)
	printf("Array contains duplicate Element:");
	else
	printf("Array does not contain dupicate value");
	
	return 0;
}
