#include<stdio.h>
int main()
{
	int i,pos,n;
	float item;
	printf("Enter the size of array:");
	scanf("%d",&n);
	float arr[n];
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	{
	  printf("arr[%d]:",i);
	  scanf("%f",&arr[i]);
    }
    
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
	
	printf("Array after Insertion:\n");
	for(i=0;i<n;i++)
	{
	 printf("arr[%d]:",i);
	 printf("%.2f\n",arr[i]);
     }
	return 0;
}
