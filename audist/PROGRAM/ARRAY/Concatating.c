#include<stdio.h>
int main()
{
	int n,i,m,arr1[20],arr2[20];
	printf("Enter the size of first array:");
	scanf("%d",&n);
	printf("Enter Array Element..");
	for(i=0;i<n;i++)
	 scanf("%d",&arr1[i]);	 
	printf("Enter the size of second array:");
	scanf("%d",&m);
	printf("Enter Array Element..");
	for(i=0;i<m;i++)
	 scanf("%d",&arr2[i]);
	 int ans[n+m];
	 int k=0;
	 i=0;
	 while(i<n)
	 {
	 	ans[k++]=arr1[i++];
	 }
	 i=0;
	 while(i<m)
	 ans[k++]=arr2[i++];
	 printf("Array after merging...\n");
	 for(i=0;i<k;i++)
	   printf("%d ",ans[i]);
	return 0;
}

