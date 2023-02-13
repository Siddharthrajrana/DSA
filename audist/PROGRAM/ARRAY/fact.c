#include<stdio.h>
int main()
{
	int a[10],i,n,size,sum=0;
	printf("Enter size:");
	scanf("%d",&size);
	printf("Enter the number");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	
	int max=0;
	for(i=0;i<size;i++)
	{
		if(a[i]<max)
		{
			max=a[i];
		}
	}
	printf("max=%d",max);
		
	
	return 0;
}
