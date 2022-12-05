#include <iostream>
#include <stdlib.h>
using namespace std;
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
// Maximum using loop
/*int max(struct node *p)
{
    int max=-456879123;
    while(p!=NULL)
    {
        if(max<p->data)
          max = p->data;

        p=p->next;
    }
    return max;

}*/
// maximum using recurssion
int max(struct node *p)
{
    if (p == NULL)
        return INT32_MIN;

    int x = max(p->next);

    return x > p->data ? x : p->data; // terninary operator for comparison
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 11};
    int n = sizeof(A) / sizeof(int);

    createNode(A, n);

    cout << "Maximum is : " << max(first);

    return 0;
}