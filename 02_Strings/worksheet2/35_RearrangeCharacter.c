/*
   Rearrange characters in a string so that the same characters are at least d distance apart.
Input: "aabbcc", d=2
Output: "abcabc"
 */
#include<stdio.h>
#include<string.h>
void reaarange_string(char *s,int d)
{
	int i,j,freq[256]={0},len=strlen(s);
char result[100];
	for(i=0;s[i]!='\0';i++)
		freq[s[i]]++;
	for(i=0;i<256;i++)
	{
		while(freq[i] > 0)
        {
            result[j] = i;
            j += d;

            if(j >= len)
                j = (j % d) + 1;

            freq[i]--;
        }
    }

    result[len] = '\0';
    strcpy(s, result);
}


int main()
{
	char s[30]="aabbcc";
	int d=2;
	rearrange_string(s,d);
}
