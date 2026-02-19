/*
Divide a string into N equal parts and print each part separately.
Input: "abcdefgh", N=4
Output: "ab", "cd", "ef", "gh"
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
int j,n;
	printf("Enetr the string\n");
	scanf("%[^\n]",s);
	printf("Enter the number to be divided\n");
	scanf("%d",&n);
	int len=strlen(s);
	if(len%n==0)
	{
		int part=len/n;
		for(int i=0;i<len;i=i+part)
		{
			for(j=i;j<i+part;j++)
				printf("%c",s[j]);
			printf("\n");
		}
	}
	else
	{
		printf("cannot be divided\n");
	}
}


