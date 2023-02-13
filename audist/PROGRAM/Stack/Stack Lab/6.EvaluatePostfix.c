#include <stdio.h>
#define MAX 100
float st[MAX];
int top=-1;
void push( int val);
int pop();
int evaluatePostfixExp(char exp[]);

int main()
{
	float val;
	char exp[100];
	printf("\n Enter any postfix expression : ");
	gets(exp);
	val = evaluatePostfixExp(exp);
	printf("\n Value of the postfix expression = %.2f", val);

return 0;
}

int  evaluatePostfixExp(char exp[])
{
	int i=0;
	int op1, op2, value;
	while(exp[i] != '\0')
    {
      if(isdigit(exp[i]))
	   push((exp[i]-'0'));
      else
      {
		op2 = pop();
		op1 = pop();
		switch(exp[i])
		{
		  case '+':
		    value = op1 + op2;
		    break;
		 case '-':
		   value = op1 - op2;
		   break;
		 case '/':
		   value = op1 / op2;
	    	break;
		 case '*':
		  value = op1 * op2;
		    break;
		 case '%':
		   value = op1 % op2;
		   break;
       }
     push(value);
     }
     i++;
   }
 return(pop());
}

void push( int val)
{
	if(top==MAX-1)
	  printf("\n STACK OVERFLOW");
	else
	{
	 top++;
	 st[top]=val;
	}
}
int pop()
{
  int val=-1;
	if(top==-1)
     printf("\n STACK UNDERFLOW");
	else
	{
	 val=st[top];
	 top--;
	}
	return val;
}
