#include  <stdio.h>

int ans[100];
int k;
int* merge(int *a1,int *a2,int n,int m){
	
	
	
    int i = 0,j = 0;
	  
   // int n=7;int m=3;
    ans[n+m];
      
    while(i < n && j < m){
        if (a1[i] < a2[j])
        {
            ans[k] = a1[i];
            i ++;
            k ++;
        }
        else if(a1[i]>a2[j])
        {
            ans[k] = a2[j];
            k++;
            j++;
        }
        else
        {
        	ans[k++]=a2[j];
        	i++;
        	j++;
		}
        
    }
    while (i < m){
        ans[k++] = a1[i++];
    }
    while (j < n){
        ans[k++] = a2[j++];
    }
    
    return ans;
}
int main() {
    // Write C code here
    printf("Hello world");
    int *n;
    int arr1[]={1,3,4,5,6,7,8};
    int arr2[] = {2,5,9};
    int len1=sizeof(arr1)/sizeof(arr1[0]);
    int len2=sizeof(arr2)/sizeof(arr2[0]);
    n=merge(arr1,arr2,len1,len2);
    for(int loop = 0; loop < len1+len2; loop++)
    {
        printf(" %d", n[loop]);
    }
    return 0;
}
