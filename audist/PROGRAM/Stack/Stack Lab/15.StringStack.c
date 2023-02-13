#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[10];
int top=-1;
void push_stack(char *s);
void display();
void push();
int main()
{
	push();
	display();
}
void push_stack(char *s)
{
	printf("%s ",s);
	top++;
	strcpy(stack[top],*s);
	puts(stack[top]);
}
void push()
{
	    char s[10];
		printf("Enter your name:");
	    gets(s);
	    push_stack(&s);

	
}
void display()
 {
 	printf("%s",stack[top]);
 }
