#include<stdio.h>
int main()
{
	int i,n,small=0;
	printf("enter the size");
	scanf("%d",&n);
	int a[i];
	printf("enter values :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int index;
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			index=i;
		}
	}
	
	printf("\nsmallest position is %d:",index);
	return 0;
}
