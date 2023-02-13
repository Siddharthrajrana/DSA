#include<stdio.h>
int main()
{
	int i,a[100],n,min=0;
	printf("Enter the size");
	scanf("%d",&n);
	{
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	}
	min=a[0];
    
	for(i=0;i<n;i++)
	{
	  if(a[i]<min)
	   {
	    min=a[i];
       }
    }
	printf("Minimum number is %d",min);
	return 0;
}
