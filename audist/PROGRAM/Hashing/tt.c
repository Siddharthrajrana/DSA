#include<stdio.h>
#include<stdlib.h>
#define n 10
int ht[n];
int key;
void insert()
{
	int val,i;
	printf("Enter the value");
	scanf("%d",&val);
	for(i=0;i<n;i++)
	{
		key=((val%n)+i)%n;
		if(ht[key]==-1)
		{
			ht[key]=val;
			break;
		}
		printf("Collison occurs:");
	}
}

void search()
{
	int val,i;
	int flag=0;
	printf("Enter the search");
	scanf("%d",&val);
	for(i=0;i<n;i++)
	{
		key=((val%n)+i)%n;
		if(ht[key]==val)
		{
			flag=1;
			printf("Key found:");
			break;
		}
	
	}
	if(flag==0)
	 printf("key not found");
}

void del()
{
	int val,i;
	printf("Enter the delete");
	scanf("%d",&val);
	for(i=0;i<n;i++)
	{
		key=((val%n)+i)%n;
		key=((val%n)+c1*i+c2*i*i)%n;
		key=(val%n+i*val%(n-2))%n;
		if(ht[key]==-1)
		{
			ht[key]=-1;
			printf("Deleted....");
			break;
		}
		printf("Collison occurs:");
	}
}
 void display()
 {
 	 int i;
 	for(i=0;i<n;i++)
 	 printf("%d  ",ht[i]);
 }
int main()
{
int i;
    for(i=0;i<n;i++)
      ht[i]=-1;
	int choice;
	while(1)
	{
		printf("\n1.Insert:");
		printf("\n2.Display:");
		printf("\n3Search:");
		printf("\n4.Delete:");
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
				search();
				break;
			case 4:
				 del();
				 break;
				 
		}
		
	}
}
