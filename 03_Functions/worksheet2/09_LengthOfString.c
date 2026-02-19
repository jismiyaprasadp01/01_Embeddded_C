/*
   Find the length of a string using recursion.
 */
#include<stdio.h>
#include<string.h>
int length(char *s)
{
	int len=0;
	if(*s=='\0')
		return 0;
	if(*s!='\0')
		len++;
	return len+length(s+1);
}

int main()
{
	char s[39]="jismiya";
	printf("Length of a string is %d\n",length(s));
}

