/*
Find the character that appears most frequently in the input string and print it.
Input: "sample string"
Output: 's'
*/
#include<stdio.h>
#include<stdlib.h>
void largest_char_freq(char *s)
{
	int freq[256]={0},i,max=0;
	char maxchar;
	for(i=0;s[i]!='\0';i++)
	{
		freq[s[i]]++;
		if(freq[s[i]]>max)
		{
			max=freq[s[i]];
			maxchar=s[i];
		}
	}
	printf("maxmimum char is %c repeates %d times",maxchar,max);
}
int main()
{
	char s[20];
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	largest_char_freq(s);
} 

