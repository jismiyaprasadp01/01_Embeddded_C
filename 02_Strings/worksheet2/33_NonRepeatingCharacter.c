/*
   For a stream of characters, print the first non-repeating character at each step.
   Input stream: "aabc"
Output: "a a b b"
 */
#include<stdio.h>
#include<string.h>
char first_non_repeatchar(char *s)
{
	int freq[256]={0},i;
	for(i=0;s[i];i++)
		freq[(unsigned int)s[i]]++;
	for(i=0;s[i];i++)
	{
		if(freq[(unsigned char)s[i]]==1)
			return s[i];
	}
	return '\0';
}
int main()
{
	char s[20]="aabc";
	char a=first_non_repeatchar(s);
	printf("%c\n",a);
}
