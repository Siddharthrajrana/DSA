#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int n)
{
	stack[++top]=n;
}
int pop()
{
	return (stack[top--]);
}
int main()
{
	 char exp[10];
	 int op1,op2,value,i;
	 printf("Enter exp");
	 scanf("%s",exp);
	 int len=strlen(exp);
	 for(i=len-1;i>=0;i--)
	 {
	 	if(isdigit(exp[i]))
	 	 push(exp[i]-'0');
	 	else
	 	{
	 		op1=pop();
	 		op2=pop();
	 		switch(exp[i])
	 		{
	 			case '+':
	 				value=op1+op2;
	 				break;
	 			case '-':
	 				value=op1-op2;
	 				break;
	 			case '*':
	 				value=op1*op2;
	 				break;
	 			case '/':
	 				value=op1/op2;
	 				break;
	 			case '%':
	 				value=op1%op2;
	 				break;
			 }
			 push(value);
		 }
	 	 
	 }
	 printf("%d",stack[0]);
}
