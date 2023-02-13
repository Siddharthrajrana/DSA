#include <stdio.h>
void call(int i);
void Insert(int A[],int n) 
{ 
 int i=n,temp; 
 temp=A[i]; 
 while(i>1 && temp>A[i/2]) 
 { 
 A[i]=A[i/2]; 
 i=i/2; 
 } 
 A[i]=temp; 
} 

int Delete(int A[],int n) 
{ 
 int i,j,x,temp,val; 
 val=A[1]; 
 x=A[n]; 
 A[1]=A[n]; 
 //A[n]=val; 
 i=1;j=i*2; 
 while(j<=n-1) 
 { 
 if(j<n-1 && A[j+1]>A[j]) 
 j=j+1; 
 if(A[i]<A[j]) 
 { 
 temp=A[i]; 
 A[i]=A[j]; 
 A[j]=temp; 
 i=j; 
 j=2*j; 
 } 
 else
 break; 
 } 
 return val; 
} 

int main()
 { 
 int H[10]; 
 int i,n; 
 printf("Enter the size of array:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  scanf("%d",&H[i]);
 for(i=2;i<=n;i++) 
 Insert(H,i);
 
 for(i=1;i<=n;i++) 
 {
   call(i);
  printf("%d ",H[i]);	
 }
  printf("\n\n\n\n");
 printf("deleted:%d ", Delete(H,7));
 printf("\n\n\n");
  n--;
  for(i=1;i<=n;i++) 
 {
   call(i);
  printf("%d ",H[i]);	
 }
 
 /*
 printf("\n");
 printf("%d ", Delete(H,n));
 printf("\n");
 n--;
 for(i=1;i<=n;i++) 
 printf("%d ",H[i]);
 
 /*for(i=7;i>1;i--) 
 { 
   Delete(H,i); 
 } 
 printf("\n");
 printf("%d ", Delete(H,7));
 printf("\n");

 
 for(i=1;i<=7;i++) 
 printf("%d ",H[i]); 
 printf("\n"); */
 
 return 0; 
}
void call(int i)
{
 	if(i==1)
 	 printf("\t\t  ");if(i==2)printf("\n\n\t  ");if(i==3)printf("\t\t\t");if(i==4)printf("\n\n ");if(i==5)printf("\t\t");if(i==6)printf("\t");if(i==7)
 	printf("\t\t");
 //	if(i==8)
 //	printf("\t\t\t");
}
