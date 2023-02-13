//length of string using recursion
#include<stdio.h>
int main()
{
	char s[10];
	printf("Enter string:");
	gets(s);
	printf("Length of string:%d",length(s));
	return 0;
}

int length(char *str)
{
	if(*str=='\0')
	  return 0;
	return (1+length(str+1));
}

