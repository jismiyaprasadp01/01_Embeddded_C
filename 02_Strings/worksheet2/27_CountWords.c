/*
   Count the number of words in a string separated by spaces.
Input: "Hello world"
Output: 2
 */
#include<stdio.h>
#include<string.h>
int count_words(char *s)
{
	int i,c=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ' || s[i+1]=='\0')
			c++;
	}
	return c;
}
int main()
{
	char s[20]="Hello World";
	int count=count_words(s);
	printf("%d\n",count);
}
