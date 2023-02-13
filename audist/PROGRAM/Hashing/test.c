#include<stdio.h>
#include<stdlib.h>
#define n 10
int ht[n];
void insert()
{
	int i,key,value;
	printf("Enter the value:");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		key=(value%n +i)%n;
		if(ht[key]==-1)
		{
			ht[key]=value;
			break;
		}
		
	}
	
}
void search()
{
	int i,key,value,flag=0;
	printf("Enter the value: to be searched");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		key=(value%n +i)%n;
		if(ht[key]==value)
		{
			flag=1;
			printf("found  at index  %d",key);
			break;
		}
		
	}
	if(flag==0)
	 printf("Item not found");
	
}
void display()
{
	int i;
	for(i=0;i<n;i++)
	  printf("%d ",ht[i]);
}
void del()
{
	int i,key,value;
	printf("Enter the value: to deleted");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		key=(value%n +i)%n;
		if(ht[key]==value)
		{
			ht[key]=-1;
			break;
		}
		
	}
	
}
int main()
{
	int choice,i;
	for(i=0;i<n;i++)
	  ht[i]=-1;
	  
	while(1)
	{
		printf("\n1.Insert");
		printf("\n2.Display");
		printf("\n3.Delete");
		printf("\n4.Search");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				del();
			    break;
			case 4:
				search();
				break;
			case 5:
				exit(0);
				
		}
		
	}
}
