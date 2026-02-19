/*
Program: Toggle case of each character of a string
         Input: "HeLLo"

http://192.168.2.101/link/252#bkmrk-output%3A-%22hello%22
 
         Output: "hEllO"
*/
#include<stdio.h>
#include<string.h>
int main()
{
        char s[20];
        int i,j;
        printf("Enter the string\n");
        scanf("%[^\n]", s);
	for(i=0;s[i]!='\0';i++)
{
if(s[i]>='a' && s[i]<='z')
s[i]=s[i]-32;
else if(s[i]>='A' && s[i]<='Z')
s[i]=s[i]+32;
}
printf("%s",s);
}

