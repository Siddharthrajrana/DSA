#include<stdio.h>

void display(int A[],int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int key(int val)
{
    return val%10;
}

int linearProbing(int A[],int size , int val)
{
    int k=-1 ;
    for(int i = 0 ; i < size ; i++)
    {
        k = ((val%10)+i)%10;
        if(A[k]==-1)
        {
            break;
        }
        printf("Collosion \n");
    }
    return k;
}

void insert(int A[], int size ,int val)
{
    int k = key(val);

    if(A[k]==-1) A[k]=val;
    else
    {
       k = linearProbing(A,10,val);
       A[k] = val;
    }

}

int search(int A[], int size , int val)
{
    int k = key(val);
    if(A[k]==val) return k;
    else
    {
        for(int i=1 ; i<size ; i++)
        {
            k = ((val%10)+i)%10;
            if(A[k]==val) return k;
            else if (A[k]==-1) return 0;
        }
        return 0;
    }
}
void delete(int A[], int size , int val)
{
    if(search(A,size,val))
    {
        int k = search(A,size,val);
        A[k]=-1;
        printf("%d is Deleted ",val);
    }
    else 
    {
        printf("%d is not found Can't Delete ",val);
    }
        
}
int main()
{
    int choice,val;
    int Table[10];
    for(int i =0 ; i<10 ; i++)
    {
        Table[i]=-1;
    }

    while(choice!=5)
    {

        printf("\n1.Insert Key \n2.Display \n3.Search \n4.Delete \n5.Exit");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1: 
                printf("Enter the value to insert : ");
                scanf("%d",&val);
                insert(Table,10,val);
                break;

            case 2:
                display(Table,10);
                break;

            case 3:
                printf("Enter the value to Search : ");
                scanf("%d",&val);
                if(search(Table,10,val))
                    printf("%d is Found.",val);
                else 
                    printf("%d is Not Found .",val);
                break;

            case 4:
                printf("Enter the value to Delete : ");
                scanf("%d",&val);
                delete(Table,10,val);
                break;

            case 5:
                printf("Ok! Exit Successfull ");
                break;

            default:
                printf("Please Enter the valid Choice ");
        }
    }
}