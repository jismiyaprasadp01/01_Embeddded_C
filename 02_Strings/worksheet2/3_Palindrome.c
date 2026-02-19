/*
Check whether a given string is a palindrome, i.e., it reads the same forwards and backwards.
Input: "madam"
Output: Palindrome
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int pali_check(char *s)
{
	int i,j,len=strlen(s);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
			return 0;
	}
	return 1;
}
int main()
{
	char *s=(char *)malloc(20* sizeof(char));
	printf("Enter the string\n");
	scanf("%s",s);
	if(pali_check(s))
		printf("string is palindrome\n");
	else
		printf("string is not palindrome\n");
}
