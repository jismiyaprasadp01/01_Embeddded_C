/*
Program: Reverse order of words in a given string
          Input: "hello world from C"

http://192.168.2.101/link/252#bkmrk-output%3A-%22c-from-worl
 
         Output: "C from world hello"
*/
#include<stdio.h>
#include<string.h>

void rev(char *s, int wb, int we)
{
    int i, j;
    char t;

    for(i = wb, j = we; i < j; i++, j--)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

int main()
{
    char s[50];
    int wb = 0, we, i,len;

    printf("Enter the string\n");
    scanf(" %[^\n]", s);
	len=strlen(s)-1;
    rev(s,0,len);
printf("%s\n",s);

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ' || s[i+1] == '\0')
        {
            if(s[i] == ' ')
                we = i - 1;
            else
                we = i;

            rev(s, wb, we);
            wb = i + 1;
        }
    }

    printf("%s", s);
}

