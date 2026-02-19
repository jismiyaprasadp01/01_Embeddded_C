/*
Remove all duplicate characters from a string, keeping only the first occurrence of each character.
Input: "programming"
Output: "progamin"
*/
#include<stdio.h>
#include<string.h>
void remove_dup(char *s)
{
	int freq[256]={0},i,j;
	for(i=0;s[i]!='\0';i++)
	{
		freq[s[i]]++;
		if(freq[s[i]]>1)
		{
			for(j=i;s[j]!='\0';j++)
				s[j]=s[j+1];
i--;
		}
	}
}
int main()
{
	char s[30];
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	remove_dup(s);
	printf("%s",s);
	printf("\n");
}

