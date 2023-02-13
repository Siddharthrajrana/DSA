#include<stdio.h>
int main()
{
	int fact=1,n;
	printf("Enter Number:");
	scanf("%d",&n);
	while(n>1)
	{
		fact=fact*n;
		n--;
	}
	printf("Factorial %d",fact);
	return 0;
}
