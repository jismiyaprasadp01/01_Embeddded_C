/*
   Recursively remove all adjacent duplicate characters from a string until no duplicates remain.
Input: "azxxzy"
Output: "ay"
 */
#include<stdio.h>
#include<string.h>
void recurse_remove(char *s)
{
    int i;

    for(i = 0; s[i] && s[i+1]; i++)
    {
        if(s[i] == s[i+1])
        {
            int j;
            for(j = i; s[j]; j++)
                s[j] = s[j+2];  

            recurse_remove(s);
            return;
        }
    }
}
int main()
{
	char s[30]="azxxzy";
	recurse_remove(s);
printf("%s",s);
}
