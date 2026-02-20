/*
Program: Find last occurrence of a character in a string
        Input: "ababcabc", find 'b'

http://192.168.2.101/link/252#bkmrk-output%3A-position%3A-6
 
        Output: Position: 6
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],c;
    printf("Enter string:\n");
    scanf("%s",s);
    printf("Enter character:\n");
    scanf(" %c",&c);
    int i=strlen(s);
    for(i=i-1;i>=0;i--)
    if(s[i]==c)
    break;

    printf("Position: %d\n",i);
}
