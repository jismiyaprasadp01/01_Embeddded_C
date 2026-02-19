/*
Print all permutations of a given string. All possible arrangements of characters should be printed.
Input: "ABC"
Output: "ABC", "ACB", "BAC", "BCA", "CAB", "CBA"
*/
#include <stdio.h>
#include <string.h>

void permute(char *s, int l, int r)
{
    if (l == r)
    {
        printf("%s\n", s);
        return;
    }

    for (int i = l; i <= r; i++)
    {
        char t = s[l];
        s[l] = s[i];
        s[i] = t;

        permute(s, l + 1, r);
        t = s[l];
        s[l] = s[i];
        s[i] = t;
    }
}

int main()
{
    char s[] = "abc";
    permute(s, 0, strlen(s) - 1);
}


