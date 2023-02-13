#include<stdio.h>
int main()
{
	int i,sum=0,a[5];
	printf("enter no.");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum= sum+a[i];
	}
	printf("\n %d",sum);
	
	return 0;
}
