/*
Print the reverse of a string using recursion.
Input: "hello"
Output: "olleh"
*/
#include<stdio.h>
#include<string.h>
void string_rev(char *s,int i,int j)
{
	char t;
	if(i<j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		string_rev(s,i+1,j-1);
	}
}
int main()
{
	char s[30];
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	string_rev(s,0,strlen(s)-1);
	printf("%s",s);
	printf("\n");
}

