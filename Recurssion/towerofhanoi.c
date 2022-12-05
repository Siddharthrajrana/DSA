#include<stdio.h>
void TOH(int n, int A, int B ,int C)
{   

    
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("(%d ,%d)\n",A,C);
        TOH(n-1,B,A,C);
    }
}
int main()
{
    int num;
    printf("Enter the number of Disk to Replace : ");
    scanf("%d",&num);
    printf("Steps to change the are as follows : \n");
    TOH(num,1,2,3);

    return 0;
}