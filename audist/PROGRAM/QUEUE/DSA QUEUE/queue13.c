#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define n 10
int front=-1,rear=-1,front1=-1,rear1=-1;
int queue[n],queue1[n];
void enqueue()
{
	int x;
	printf("Enter data");
	scanf("%d",&x);
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else if(rear==n-1)
		printf("Queue overflow");
	else
	{
		rear++;
		queue[rear]=x;
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("Data in queue is :%d",queue[i]);
	}
}
void enqueue1()
{
	int x;
	printf("Enter data");
	scanf("%d",&x);
	if(front1==-1 && rear1==-1)
	{
		front1=rear1=0;
		queue1[rear1]=x;
	}
	else if(rear1==n-1)
		printf("Queue overflow");
	else
	{
		rear1++;
		queue1[rear1]=x;
	}
}
void display1()
{
	int i;
	for(i=front1;i<=rear1;i++)
	{
		printf("Data in queue is :%d",queue1[i]);
	}
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue empty");
    }
    
    else{
        int *temp;
        temp=&front;
        printf("Element to be deleted is :%d",queue[front]);
        front++;

        free(temp);
    }
}
void dequeue1()
{
    if(front1==-1 && rear1==-1)
    {
        printf("Queue empty");
    }
    
    else{
        int *temp1;
        temp1=&front1;
        printf("Element to be deleted is :%d",queue[front1]);
        front1++;

        free(temp1);
    }
}


void compare()
{
	int i,j,flag=0;
	for(i=front,j=front1;i<=rear;i++,j++)
	{
		if(queue[i]==queue1[j])
		continue;
		else
		{
			flag=1;
		printf("Elemenet does not matched");
		break;
		}

	}
	if(flag==0)
	printf("ALL elements matched ");

}
void main()
{
	int exit=1;
	do
	{
		int ch;
		printf(" 1.enqueue \n 2.dequeue \n 3. display \n 4. enqueue1 \n 5. dequeue1 \n 6. display1 \n 7. exit \n 8. compare");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			enqueue();
			break;
			case 2:
	        dequeue();
			break;
			case 3:
			display();
			break;
            case 4:

			enqueue1();
			break;
			case 5:
			dequeue1();
			break;
			case 6:
			display1();
			break;
			case 7:
			exit=0;
			break;
            case 8:
			compare();
			break;
			default:
			printf("Invalid choice");
			}
	}while(exit);
}		
