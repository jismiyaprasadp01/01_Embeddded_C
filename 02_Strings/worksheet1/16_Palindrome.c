/*
Program: Check whether a string is palindrome or not
        Input: "madam"

http://192.168.2.101/link/252#bkmrk-output%3A-%22palindrome%22
 
       Output: "Palindrome"
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter string:\n");
    scanf("%s",s);
    int i,j;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        break;
    }
    if(i==j)
    printf("Palindrome:\n");
    else
    printf("Not Palindrome:\n");
}
