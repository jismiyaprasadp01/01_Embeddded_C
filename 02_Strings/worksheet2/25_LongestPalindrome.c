/*
Find the longest palindromic substring inside a given string.
Input: "babad"
Output: "bab" or "aba"
*/
#include <stdio.h>
#include <string.h>

int isPalindrome(char *s, int l, int r)
{
    while(l < r)
    {
        if(s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

int main()
{
    char s[] = "babad";
    int len = strlen(s);

    int start = 0, maxLen = 1;

    for(int i = 0; i < len; i++)
    {
        for(int j = i; j < len; j++)
        {
            if(isPalindrome(s, i, j))
            {
                if(j - i + 1 > maxLen)
                {
                    start = i;
                    maxLen = j - i + 1;
                }
            }
        }
    }

    for(int i = start; i < start + maxLen; i++)
        printf("%c", s[i]);

    printf("\n");
}

