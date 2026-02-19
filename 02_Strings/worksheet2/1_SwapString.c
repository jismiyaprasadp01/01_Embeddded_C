/*
Swap the contents of two strings without using any extra temporary string variables. The strings' values should be exchanged completely.
Input: str1 = "hello", str2 = "world"
Output: str1 = "world", str2 = "hello"
*/


#include<stdio.h>
#include<string.h>
int main()
{
char s[]="hello";
char m[]="world";
int i,len=strlen(s);
for(i=0;i<len;i++)
{
s[i]=s[i]^m[i];
m[i]=m[i]^s[i];
s[i]=s[i]^m[i];
}
printf("s is %s\n and m is %s\n",s,m);
}

