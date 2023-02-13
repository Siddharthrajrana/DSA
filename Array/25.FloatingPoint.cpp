#include<stdio.h>
#define MAX 100
int main()
{
	int i,pos,n;
    float arr[MAX],item;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter the element:");
	for(i=0;i<n;i++)
	  scanf("%f",&arr[i]);
	  
	printf("Enter the item to be inserted:");
	scanf("%f",&item);
	
	printf("Enter the position to be Inserted:");
	scanf("%d",&pos);
	if(pos>n)
	{
		printf("Invaliad position::");
		return 0;
	}
	for(i=n-1;i>=pos;i--)
	 arr[i+1]=arr[i];
	 
	arr[pos]=item;
	n++;
	
	printf("Array after Insertation:\n");
	for(i=0;i<n;i++)
	 printf("%.2f ",arr[i]);
	 
	 return 0;
	
}
/*
Enter the size of array:4
Enter the element:3.5
6.8
34.6
32.2
Enter the item to be inserted:4.7
Enter the position to be Inserted:3
Array after Insertation:
3.50 6.80 34.60 4.70 32.20
*/
