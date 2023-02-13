#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char str[100];
    int j=0;
    int i;
    char x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    strrev(exp);

    printf("\n");
    for(i=0;i<strlen(exp);i++)
    {
        if(isalnum(exp[i]))
          str[j++]=exp[i];
            //printf("%c ",exp1[i]);
        else if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
        {
            while((x = pop()) != '(')
                str[j++]=exp[i];
				//printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(exp[i]))
                str[j++]=pop();
				//printf("%c ",pop());
            push(exp[i]);
        }
    }
   //printf("%s",str);
    while(top != -1)
    {
    	str[j++]=pop();
        //printf("%c ",pop());
    }
    strrev(str);
    str[j]='\0';
    printf("%s",str);
    return 0;
}
