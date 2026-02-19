/*
Partition a string into the minimum number of palindromic substrings (Palindrome Partitioning).
Input: "ababbbabbababa"
Output: 3
*/
#include <stdio.h>
#include <string.h>
#include <limits.h>

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

int minPart(char *s, int start, int end)
{
    if(start > end)
        return 0;

    if(isPalindrome(s, start, end))
        return 1;

    int min = INT_MAX;

    for(int i = start; i <= end; i++)
    {
        if(isPalindrome(s, start, i))
        {
            int count = 1 + minPart(s, i+1, end);
            if(count < min)
                min = count;
        }
    }

    return min;
}

int main()
{
    char s[] = "ababbbabbababa";
    int n = strlen(s);

    printf("%d\n", minPart(s, 0, n-1));
}

