/*
Program: Reverse a string without using library functions
         Input: "OpenAI"

http://192.168.2.101/link/252#bkmrk-output%3A-%22ianepo%22
 
         Output: "IAnepO"
*/
#include<stdio.h>
#include<string.h>
void string_rev(char *s)
{
        int len=strlen(s),i,j;
        char t;
        for(i=0,j=len-1;i<j;i++,j--)
        {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
        }
        printf("%s",s);
printf("\n");
}
int main()
{
        char s[20];

        printf("Enter the string\n");
        scanf("%s", s);
        string_rev(s);
}
