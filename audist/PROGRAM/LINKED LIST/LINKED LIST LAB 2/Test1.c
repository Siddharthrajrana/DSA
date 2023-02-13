#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
char stack[10];
int top=-1;
void push(char a)
{
	if(top==MAX-1)
	  printf("Stack overflow");
	else
	{
		top++;
		stack[top]=a;
	}
}
char pop()
{
	char a;
	if(top==-1)
	  printf("Stack underflow:");
	else
	  a=stack[top];
	 top--;
	 return a;
}
int main()
{
	char exp[10];
	int flag=1;
	int i;
	char temp;
	printf("Enter Expression");
	scanf("%s",exp);
	for(i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='['||exp[i]=='('||exp[i]=='{')
		 push(exp[i]);
		if(exp[i]==']'||exp[i]==')'||exp[i]=='}')
		 if(top==-1)
		    flag=0;
		else
		 {
		 	temp=pop();
		 	if(exp[i]==')' && (temp=='[' || temp=='{' ))
		 	   flag=0;
		 	if(exp[i]=='}' && (temp=='[' || temp=='(' ))
		 	   flag=0;
		 	if(exp[i]==']' && (temp=='(' || temp=='{' ))
		 	   flag=0;
		 }
		
	}
	if(top>=0)
	 flag=0;
	if(flag==1)
	 printf("Valid Expression:");
	else
	 printf("Invalid Expression");
}
