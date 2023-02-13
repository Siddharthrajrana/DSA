/*
	Name: 
	Copyright: 
	Author: 
	Date: 30-10-22 2:44
	Description: Operation on Array
*/


#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int arr[MAX];
int n=0;
void create();
void display();
void delete();
void Reverse();
void deleteAtEnd();
void deletAtBeg();
void delByval();
void search();
void sort();
void InsertAtBeg();
void InsertAtEnd();
void  InsertAtindex();
int main()
{
	int choice,item;
	while(1)
	{
		printf("**************************************\n");
		printf("1.Create:\n");
		printf("2.Delete:\n");
		printf("3.Display:\n");
		printf("4.Reverse:\n");
		printf("5.insert:\n");
		printf("6.Search\n");
		printf("7.sort\n");
		printf("8.Exit\n");
		printf("**************************************\n");
		printf("Enter the choice:\n");
		scanf("%d",&choice);
		system("cls");
		switch(choice)
		{
			case 1:
				create();
			break;
			case 2:
				while(1)
				{
				  printf("**************************************\n");
				  printf("\n1.Delete from end");
				  printf("\n2.Delete from beginning:");
				  printf("\n3.Delete At index");
				  printf("\n4.Delete by value\n");
				  printf("\n5.Back");
				  printf("\n**************************************\n");
				  printf("\nEnter your choice:");
				  scanf("%d",&choice);
				  system("cls");
				  switch(choice)
				  {
				  	case 1:
				  	      deleteAtEnd();	  	      
				  	 break;
				  	 case 2:
				  	      deletAtBeg();
				  	 break;
				  	 case 3:
				  	 	delete();
				  	 	break;
				  	case 4:
				  		delByval();
				  }
				  if(choice==5)
				   break;
			}
			break;
			
			case 3:
				display();
			break;
			case 4:
			 Reverse();
			break;
			case 5:
				while(1)
				{
				printf("**************************************\n");
				  printf("\n1.Insert at end:");
				  printf("\n2.Insert at beginning:");
				  printf("\n3.Insert at given  index");
				  printf("\n4.Display");
				  printf("\n5.Back");
				printf("\n*************************************\n");
				  printf("Enter your choice:");
				  scanf("%d",&choice);
				  system("cls");
				  switch(choice)
				  {
				  	case 1:
				  		InsertAtEnd();
				  		break;
				  	case 2:
				  		InsertAtBeg();
				  		break;
				  	case 3:
				  		InsertAtindex();
				  		break;
				  	case 4:
				  		display();
				  }
				  if(choice==5)
				   break;
				}
			break;
			case 6:
				search();
				break;
		    case 7:
		    	sort();
		    	break;
		    case 8:
		    	exit(1);
		    default:
		    	printf("Invalid choice");
		}
	}
}
void InsertAtEnd() 
{
	int ele;
	printf("Enter the element to be Inserted:");
	scanf("%d",&ele);	
	arr[n]=ele;
	n++;
	printf("Inseted Successfully..");
}
void InsertAtBeg()
{
	int i,ele;
	printf("Enter the element to be Inserted:");
	scanf("%d",&ele);
	for(i=n-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=ele;
	n++;
	printf("Inseted Successfully..");
}
void delByval()
{
	int i, val,pos,flag=0;
	if(n==0)
	{
		printf("Array is Empty\n");
		return;
	}
	printf("Enter the Value to be deleted..\n");
	scanf("%d",&val);
	for( i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==0)
	{
		printf("Value not found..\n");
		return;
	}
   	for(i=pos;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;	
//	printf("Value not found..\n");
}
void  InsertAtindex()
{
	int ele,pos,i;
	printf("Enter the value to be inserted:");
	scanf("%d",&ele );
	
	printf("Enter the position:");
	scanf("%d",&pos);
	if(pos>n)
	{
		printf("Invalid position:\n");
		return;
	}
	for(i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=ele;
	n++;
	printf("successfully inserted...\n");
}
void create()
{
	int i;
	printf("Enter the number of Elements:\n");
	scanf("%d",&n);	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void display()
{
	int i;
	if(n==0)
	{
		printf("Array is Empty\n");
		return;
	}
	printf("Element of Array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void delete()
{
	int pos,i;
	printf("Enter the position from where element to be deleted\n");
	scanf("%d",&pos);
	 if(pos>=n)
	 {
	 	printf("Invalid position\n");
       return;
	 }
	for(i=pos;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("Element Deleted Successfully....");
}
void deleteAtEnd()
{
	if(n==0)
	{
	 printf("Array is Empty\n");
	 return;
    }
    n--;
    printf("Element Deleted Successfully....");
}
void deletAtBeg()
{
	int i;
	if(n==0)
	{
	 printf("Array is Empty\n");
	 return;
    }
	for( i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("Element Deleted Successfully....");
}
void Reverse()
{
	int i,j,temp;
	 for(i=0,j=n-1;i<j;i++,j--)
    {
    	temp=arr[i];
    	arr[i]=arr[j];
    	arr[j]=temp;	
	}
}
void search()
{
	int i,val;
 printf("Enter value to be Searched:\n");
 scanf("%d",&val);
 for(i=0;i<n;i++)
 {
 	if(arr[i]==val)
 	{	 
 	printf(" found at index %d",i);
 	return;
   }
 }
 printf("Not found");
}
void sort()
{
	int i,j,swap,temp;
	for(i=0;i<n-1;i++)
	{
		swap=0;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swap++;
			}
		}
		if(swap==0)
		 break;
	}
	if(n!=0)
	{
		printf("Data sorted successfully...\n");
	}
}  
