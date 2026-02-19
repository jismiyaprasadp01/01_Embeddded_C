/*
 Reverse a sentence using recursion
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-re-3
 
Question: Write a recursive function to reverse a sentence.
Sample data: Input: "hello world"
Expected output: "world hello"
*/
#include <stdio.h>
#include <string.h>
void reverseSentence(char *s)
{
    if(*s == '\0')
        return;

    int i = 0;
    while(s[i] != ' ' && s[i] != '\0')
        i++;

    if(s[i] == ' ')
    {
        reverseSentence(s + i + 1);
        printf("%.*s ", i, s);
    }
    else
    {
        printf("%s ", s);
    }
}

int main()
{
    char s[] = "hello world";
    reverseSentence(s);
}

