#include<stdio.h>
int main()
{
	int pos,i,val,a[100],n;
	printf("Enter the no. of element");
	scanf("%d",&n);
	printf("enter no.\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value to insert :");
	scanf("%d",&val);
	for(i=n-1;i>=0;i--)
	{   
	   if(a[i]>val)
	    {
		 	a[i+1]=a[i];
		 	
		}
		else
		break;
		
	}
	a[i+1]=val;
	n++;
	printf("\nAfter insertation \n:");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]:",i);
		printf(" %d\n",a[i]);
	}
	return 0;
}
