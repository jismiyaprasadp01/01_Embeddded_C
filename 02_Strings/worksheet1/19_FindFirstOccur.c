/*
Program: Find first occurrence of a character in a given string
       Input: "elephant", find 'e'

        Output: Position: 0
*/
#include<stdio.h>
int main()
{
    char s[20],c;
    printf("Enter string:\n");
    scanf("%s",s);
    printf("Enter character:\n");
    scanf(" %c",&c);
    int i;
    for(i=0;s[i];i++)
    if(s[i]==c)
    break;
    printf("Position: %d\n",i);
}
