  #include<stdio.h>
int main()
{
	int i,size,index=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]:",i);
    	scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=0;i<size;i++)
    {
       if(a[i]<min)
       {
       	min=a[i];
       	index=i;
	   }
	}
//	printf("%d ",min);
	printf("\nPosition of  smallest Element is %d",index);
	return 0;

}
