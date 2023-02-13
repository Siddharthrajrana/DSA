#include<stdio.h>
#include<stdlib.h>
int heap[10];
int GAP=1;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void heapify(int n,int i)
{
	int left,right,largest;
	largest=i;
	left=(2*i)+1;
	right=(2*i)+2;
	if(left<n&&heap[left]<heap[largest])
	   largest=left;
	if(right<n&&heap[right]<heap[largest])
	   largest=right;
	if(i!=largest)
	{
		swap(&heap[i],&heap[largest]);
		 heapify(n,largest);
	}
	
}
void display(int n,int i,int space)
{
	int j,left,right;
    if(i<n) 
    {
        space=space+GAP;
        left=(2*i)+1;
        right=(2*i)+2;
        display(n,right,space);
        printf("\n");
        for(j=GAP;j<space;j++)
            printf("\t");
        printf("%d\n",heap[i]);
        display(n,left,space);
    }
}
int insert(int n)
{
	int node,i;
	printf("\nEnter the node: ");
	scanf("%d",&node);
    heap[n]=node;
    n++;
    for(i=n/2-1;i>=0;i--)
    	heapify(n,i);
    return n;
}
int del(int n)
{
	int node,i;
	printf("Enter node:");
	scanf("%d",&node);
	for(i=0;i<n;i++)
	{
		if(heap[i]==node)
		 break;
	}
	if(i!=n)
	{
		swap(&heap[i],&heap[n-1]);
		n--;
		
	for(i=n/2-1;i>=0;i--)
	   heapify(n,i);
		
	}
	return n;
}
int main()
{
	int i,choice,n=0;
	while(1)
	{
		printf("\n1.insert");
		printf("\n2.Display");
		printf("\n3.Delete");
		printf("Emter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				n=insert(n);
				display(n,0,0);
				break;
			case 2:
				display(n,0,0);
				break;
			case 3:
				n=del(n);
				break;
			case 4:
				exit(0);
		}
	}
}
