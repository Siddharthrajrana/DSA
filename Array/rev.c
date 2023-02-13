#include<stdio.h>
#include<conio.h>
main()
{
	int num,rev=0,rem=0,sum=0;
	printf("Enter a number");
	scanf("%d",&num);
	int p=num;
	while(num!=0)
	{
		 rem=num%10;
		 sum+=rem*rem*rem;
		 num=num/10;
	}
	if(sum==p)
	printf("armstrong");
	else
	printf("laura armstrong");
	return 0;
}
