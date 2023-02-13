#include<stdio.h>
int main()
{
	int b,e,res=1;
	printf("Enter Base:");
	scanf("%d",&b);
	
	printf("Enter exp:");
	scanf("%d",&e);
    while(e!=0)
    {
    	res*=b;
    	--e;
	}
	printf("result %d",res);
	return 0;
}
