#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *last = NULL;

void createList(int A[], int size)
{

    head = malloc(sizeof(struct node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < size; i++)
    {
        struct node *temp;
        temp = malloc(sizeof(struct node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void insertNodeAtFirst(int val)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
}

void insertAtLast(int val)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    last->next = temp;
    last = temp;
}

int count(struct node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

void insertNodeInBetween(int val, int place)
{
    struct node *temp, *p;
    // p=malloc(sizeof(struct  node)); not needed

    if (place == 0)
    {
        temp = malloc(sizeof(struct node));
        temp->data = val;
        temp->next = head;
        head = temp;
    }
    else if (place > 0)
    {
        p = head;
        for (int i = 1; i < (place - 1) && p; i++) // p is to check whether we exceeds null
        {
            p = p->next;
        }
        if (p)
        {
            temp = malloc(sizeof(struct node));
            temp->data = val;
            temp->next = p->next;
            p->next = temp;
        }
    }
}

int search(struct node *p, int val)
{
    int pos = 0, flag = 0;
    while (p != NULL)
    {
        pos++;
        if (p->data == val)
        {
            flag = 1;
        }
        p = p->next;
    }
    if (flag)
        return 1;
    else
        return 0;
}

int deleteNode(int pos)
{
    struct node *p, *q;
    int x = -1;

    if (pos == 1)
    {
        p = head;
        x = head->data;
        head = head->next;
        free(p);
    }
    else
    {
        p = head;
        q = NULL;
        for (int i = 1; i <= pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;
            x = p->data;
            free(p);
        }
    }

    return x;
}

int countRec(struct node *p)
{
    if (p == NULL)
        return 0;

    return countRec(p->next) + 1;
}

void reverseDisplay(struct node *p)
{
    if (p == NULL)
        return;

    reverseDisplay(p->next);
    printf("%d ", p->data);
}

int findMax(struct node *p)
{
    int max = -2589140;

    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }

    return max;
}

int isSorted(struct node *p)
{
    int x = p->data;
    while (p != NULL)
    {
        if (x > p->data)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}

int removeDuplicate(struct node *p)
{
    struct node *q;
    q = p->next;
    int x = 0;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            x = p->data;
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
    return x;
}

void reverseList(struct node *p)
{
    struct node *q , *r ;
    q=NULL,r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;

        q->next = r;

    }
    head = q;

    struct node *t=head;
    while(t!=NULL)
    {
        printf("%d ", t->data);
        t=t->next;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(A) / sizeof(A[0]);

    createList(A, size);
    int choice, val, place;

    do
    {
        printf("\n\n1.Display List \n2.Insert Node at first \n3.Insert At Last \n4.Insert InBetween \n5.Count Node \n6.Delete Node \n7.Search \n8.Count node using Recurssion \n9.Display in Reverse by recurssion \n10.Find Maximum \n11.Chech Sorted \n12.Remove continous Duplicate \n13.Reverse \n15.Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            display(head);
            break;

        case 2:
            printf("\n\nEnter the value to Insert : ");
            scanf("%d", &val);
            insertNodeAtFirst(val);
            break;

        case 3:
            printf("Enter the value to insert at last : ");
            scanf("%d", &val);
            insertAtLast(val);
            break;

        case 4:
            printf("Enter the value to insert in Between : ");
            scanf("%d", &val);
            printf("Enter the place you want to Insert : ");
            scanf("%d", &place);
            insertNodeInBetween(val, place);
            break;
        case 5:
            printf("Total no. of Nodes is %d", count(head));
            break;

        case 6:
            printf("Enter the position to delete : ");
            scanf("%d", &place);
            printf("Deleted node is %d ", deleteNode(place));
            break;

        case 7:
            printf("Enter the value to search : ");
            scanf("%d", &val);
            printf("Element is found if 1 or not found if 0 : %d", search(head, val));
            break;

        case 8:
            printf("Total numbers of nodes using recursion is : %d", countRec(head));
            break;

        case 9:
            reverseDisplay(head);
            break;

        case 10:
            printf("The maximum value in the list is %d", findMax(head));
            break;

        case 11:
            if (isSorted(head))
                printf("Linked list is sorted ");
            else
                printf("Linked list is not Sorted ");
            break;

        case 12:
            printf("Removed value is %d ", removeDuplicate(head));
            break;

        case 13:
            reverseList(head);
            break;
            

        case 15:
            printf("\n\nOk! Exit ");
            break;

        default:
            printf("\n\nPlease Enter the valid Choice ");
        }
    } while (choice != 15);
}