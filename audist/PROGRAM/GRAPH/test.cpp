#include<stdio.h>
int queue[5];
int front=0;
int rear=0;
int visited[5];
int enqueue(int n)
{
	if(rear==5)
	{
		printf("\noverflow");
	}
	else
	{
		queue[rear++]=n;
	}
	return n;
}
int dequeue( )
{
	if(front<0)
	{
		printf("\nUnderflow");
	}
	else
	{
		front++;
	}
}
void display()
{
	int n,i;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
	   printf("%d",queue[i]);
	}
}
int main()
{
   display();
}

