#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,m,n;
	printf("Enter the size of first array:");
	scanf("%d",&n);
	int a1[n];
	printf("enter Array element ");
	for(i=0;i<n;i++)
	{
    	scanf("%d",&a1[i]);
    }
    printf("Enter the size of second array:");
	scanf("%d",&m);
	int a2[m];
	printf("enter Array element ");
	for(i=0;i<m;i++)
	{
    	scanf("%d",&a2[i]);
    }
    i=0;j=0;k=0;
    int a3[m+n];
    while(i<n && j<m)
    {
    	if(a1[i]<a2[j])
    	a3[k++]=a1[i++];
    	else if(a1[i]>a2[j])
    	a3[k++]=a2[j++];
    	else
    	{
    		a3[k++]=a2[j++];
    		i++;
		}
	}
	while(i<n)
	a3[k++]=a1[i++];
	while(j<m)
	a3[k++]=a2[j++];
	printf("Array after insertation");
	for(i=0;i<k;i++)
	{
		printf("\na3[%d]=",i);
		printf("%d",a3[i]);
	}
	return 0;
}
