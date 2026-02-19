/*
Program: Count frequency of each character in a string
Input: "success"

Output:
s = 3
u = 1
c = 2
e = 1
 */
#include<stdio.h>
int main()
{
	char s[20],a[20];
	printf("Enter the string:\n");
	scanf("%s",s);
	int freq[256]={0},i;
	for(i=0;s[i];i++)
		freq[(unsigned char)s[i]]++;
	for(i=0;s[i];i++)
	{
		if(freq[(unsigned char)s[i]]!=0)
		{
			printf("%c=%d\n",s[i],freq[(unsigned char)s[i]]);
			freq[(unsigned char)s[i]]=0;
		}
	}
}

