#include<stdio.h>
#include<stdlib.h>
#define n 10
int ht[n];
void insert()
{
	int flag=1,i;
	int val,key;
	printf("Enter the value");
	scanf("%d",&val);
	key=val%n-1;
	if(ht[key]==-1)
	  ht[key]=val;
	else
	{
		for(i=key+1;i<n;i++)
		{
			if(ht[i]==-1)
			{
				flag=0;
				ht[i]=val;
				break;
			}
		}
		if(flag==1)
		{
			for(i=0;i<key;i++)
		   {
				if(ht[i]==-1)
				{
					ht[i]=val;
					break;
				}
		   }
		}
	}
}

	
void search()
{
	int flag=1,i;
	int val,key;
	printf("Enter the value");
	scanf("%d",&val);
	key=val%n-1;
	if(ht[key]==val)
	  printf("Key found:");
	else
	{
		for(i=key+1;i<n;i++)
		{
			if(ht[i]==val)
			{
			    printf("Key found");
				break;
			}
		}
		if(flag==1)
		{
			for(i=0;i<key;i++)
		   {
				if(ht[i]==-1)
				{
					ht[i]=val;
					break;
				}
		   }
		}
	}
}

void del()
{
	int flag=1,i;
	int val,key;
	printf("Enter the value");
	scanf("%d",&val);
	key=val%n-1;
	if(ht[key]==val)
	  ht[key]=-1;
	else
	{
		for(i=key+1;i<n;i++)
		{
			if(ht[i]==val)
			{
				flag=0;
				ht[i]=-1;
				break;
			}
		}
		if(flag==1)
		{
			for(i=0;i<key;i++)
		   {
				if(ht[i]==val)
				{
					ht[i]=-1;
					break;
				}
		   }
		}
	}
}

void display()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",ht[i]);
	}
}
int main()
{
	int i,choice;
	for(i=0;i<n;i++)
	  ht[i]=-1;
	  
	while(1)
	{
		printf("\n1.Insert");
		printf("\n2.Display");
		printf("\n3.search");
		printf("\n4.Delete");
		printf("Enter your choice");
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
			case 5:
				exit(0);
		}
	}
}
