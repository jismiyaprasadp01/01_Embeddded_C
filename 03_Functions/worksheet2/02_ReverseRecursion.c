/*
   Reverse a string using recursion.
 */
#include<stdio.h>
#include<string.h>
void reverse(char *s,int i,int len)
{
	if(i<len)
	{
		char t=s[i];
		s[i]=s[len];
		s[len]=t;
		reverse(s,i+1,len-1);
	}
}

int main()
{
	char s[20]="Malu";
	int len=strlen(s)-1;
	reverse(s,0,len);
	printf("%s",s);
}
