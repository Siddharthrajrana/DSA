#include<stdio.h>
int main()
{
	int rem=0,num,sum=0,i;
	printf("Enter a number");
	scanf("%d",&num);
	i=num;
	while(num!=0)
	{
	rem=num%10;
	sum=sum+rem*rem*rem;
	num=num/10;
	}
	if(i==sum)
	printf("armstrong hai");
	else
	printf("laura armstrong hai baap ke juije");
	return 0;
}
