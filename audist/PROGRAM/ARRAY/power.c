#include<stdio.h>
int power(int a,int b)
{
	if(b==0)
	 return 1;
	return (a*power(a,b-1));
}
int main()
{
	int b,e;
	printf("Enter base:");
	scanf("%d",&b);
	printf("Enter expo:");
	scanf("%d",&e);
	printf("Result:%d",power(b,e));
	return 0;
}
