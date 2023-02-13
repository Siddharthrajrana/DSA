#include<stdio.h>
long fact(int num)
{
	if(num==0)
	  return 1;
	return num*fact(num-1);
}
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("factorial is %d",fact(n));
	return 0;
}
