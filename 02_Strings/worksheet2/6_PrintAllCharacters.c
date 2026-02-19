/*
Print all characters that occur more than once in a string.
Input: "programming"
Output: r g m
*/
#include<stdio.h>
#include<string.h>
void repeat_char(char *s)
{
	int freq[256]={0},i;
	for(i=0;s[i]!='\0';i++)
		freq[s[i]]++;
	for(i=0;i<256;i++)
	{
		if(freq[i]>1)
			printf("%c\n",i);
	}
}

int main()
{
	char s[30];
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	repeat_char(s);
}

