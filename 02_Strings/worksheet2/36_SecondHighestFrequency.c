/*
   Find the character with the second highest frequency in a string.
Input: "aabababa"
Output: 'b'
 */
#include<stdio.h>
#include<string.h>
char second_freq(char *s)
{
	int freq[256]={0},max=0,sec_max=0,i;
	for(i=0;s[i]!='\0';i++)
		freq[s[i]]++;
	for(i=0;i<256;i++)
	{
		if(freq[i]>max)
		{
			max=freq[i];
		}
		else if(freq[i]>sec_max && freq[i]!=max)
		{
			sec_max=freq[i];
		}
	}
	for(i=0;s[i]!='\0';i++)
		if(freq[(unsigned char)s[i]]==sec_max)
			return s[i];
	return '\0';
}

int main()
{
	char s[30]="aabababa";
	char a=second_freq(s);
	printf("%c\n",a);
}
