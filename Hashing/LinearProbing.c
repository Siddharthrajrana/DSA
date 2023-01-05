#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int hash(int val)
{
    return val%SIZE;
}

int LinearProbing(int H[], int val)
{
    int index = hash(val);
    int i = 0;
    
    while (H[index+i]!=0)
    {
        i++;
    }
     return (index+i)%SIZE ;

}

void Insert(int H[], int val)
{
    int index = hash(val);

    if(H[index]!=0)
    {
        index = LinearProbing(H,val);
    }
    H[index]=val;
}

void Display(int HT[])
{
    for (int i = 0 ; i < SIZE ; i++)
    {
        printf("%d ", HT[i]);
    }
}
int search(int H[], int key)
{
    for (int i = 0 ; i < SIZE ; i++)
    {
        if(H[i]==key)
            return i;
    }

    return 0;
}
int Delete(int H[], int key)
{
    int flag = search(H,key);
    
    if(flag)
    {   
        int val = H[flag];
        H[flag] = 0;
        return val;

    }
    else 
    {
        printf("Element not found ");
        return 0;
    }
    
}
int main()
{
    int HT[SIZE] = {0} , choice , val , key ;

    do
    {
        printf("\n1.Insert Value \n2.Search \n3.Delete  \n4.Display \n5.Exit");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);

        switch(choice )
        {
            case 1:
                printf("Enter the value to insert  : ");
                scanf("%d",&val);
                Insert(HT, val);
                break;
            case 4:
                Display(HT);
                break;

            case 2:
                printf("Enter the key to Search : ");
                scanf("%d",&key);
                if(search(HT,key))
                    printf("Key is found at index %d",search(HT,key) );
                else 
                    printf("Key is not found ");
                break;
            case 3:
                printf("Enter the key to delete : ");
                scanf("%d",&val);
                printf("%d is Deleted ", Delete(HT,val));
                break;

            case 5:
                printf("OK! Exit");
                break;
            
            default:
                printf("Please Enter the Valid Choice ");


        }
    }
    while(choice!=5);

    
}