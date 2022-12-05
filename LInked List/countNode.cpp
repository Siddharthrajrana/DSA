#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first = NULL;

void createNode(int A[], int n)
{
    struct node *temp, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
/*int countNode(struct node *p)
{
    int count =0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
   return count;
}*/
int countRecurssion(struct node *p)
{
    int x = 0;
    if (p)
    {
        return countRecurssion(p->next) + 1;
        // x= countRecurssion(p->next);
        // return x+1;
    }
    else
        return x;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    createNode(A, 10);
    printf("Total number of nodes are : %d", countRecurssion(first));

    return 0;
}