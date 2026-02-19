/*
Remove from the first string all characters that appear in the second string.
Input: str1 = "hello world", str2 = "low"
Output: "he rd"
*/
#include<stdio.h>
#include<string.h>

void remove_character(char *s, char *m)
{
	int i,j=0,count[256]={0};
	for(i=0;m[i];i++)
		count[m[i]]++;
	for(i=0;s[i];i++)
		if(count[s[i]]==0)
			s[j++]=s[i];
	s[j]='\0';
	printf("%s",s);
	printf("\n");
}



int main()
{
	char s[30] = "embedded";
	char m[30] = "miracle";

	remove_character(s, m);
}


