/*
Remove all occurrences of character 'b' and substring "ac" from a string.
Input: "abacb"
Output: "a"
*/
#include<stdio.h>
#include<string.h>
void remove_occurence(char *s,char *p,char x)
{
char result[50];
    int i = 0, j = 0;

    while(s[i])
    {
        if(s[i] == x)        // skip 'b'
        {
            i++;
        }
        else if(s[i] == p[0] && s[i+1] == p[1])   // skip "ac"
        {
            i += 2;
        }
        else
        {
            result[j++] = s[i++];
        }
    }

    result[j] = '\0';
    strcpy(s, result);
}


int main()
{
char s[20]="abacb";
char p[20]="ac";
char x='b';
remove_occurence(s,p,x);
printf("%s",s);
}
