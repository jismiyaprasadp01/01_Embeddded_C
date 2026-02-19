/*
   Check if a string is a palindrome using recursion.
 */
#include<stdio.h>
#include<string.h>
int pali_check(char *s,int i,int len)
{
	if(i>=len)
		return 1;
	if(s[i]!=s[len])
		return 0;
	
		return pali_check(s,i+1,len-1);

}
	int main()
	{
		char s[20]="madam";
		int len=strlen(s)-1;
		if(pali_check(s,0,len))
			printf("Palindrome\n");
		else
			printf("Not Palindrome\n");
	}

