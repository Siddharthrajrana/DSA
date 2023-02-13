#include <stdio.h>
float ans[100];
float* merge(float *a1,float *a2,int n,int m)
{	
    int i = 0,j = 0,k = 0;
	  
   // int n=7;int m=3;
    ans[n+m];
      
    while(i < n && j < m){
        if (a1[i] < a2[j])
        {
            ans[k] = a1[i];
            i ++;
            k ++;
        }
        else
        {
            ans[k] = a2[j];
            k++;
            j++;
        }
        
    }
    while (i < n)
	{
        ans[k++] = a1[i++];
    }
    while (j < m)
	{
        ans[k++] = a2[j++];
    }
    
    return ans;
}
int main() {
    // Write C code here
//    printf("Hello world");
    int i,n,m;
    float *n1;
    printf("Enter the size of first array:");
    scanf("%d",&n);
    float arr1[n];
    for(i=0;i<n;i++)
	 {
	 	printf("arr[%d]:",i);
	 	scanf("%f",&arr1[i]);
	 }
	printf("Enter the size of second array:");
    scanf("%d",&m);
    float arr2[m];
    for(i=0;i<m;i++)
	 {
	 	printf("arr[%d]:",i);
	 	scanf("%f",&arr2[i]);
	 }
    n1=merge(arr1,arr2,n,m);
    printf("After merging..\n");
    for( i= n+m-1; i>=0; i--)
    {
        printf(" %.2f", n1[i]);
    }
    return 0;
}
