/*Program: Remove all repeated characters from a given string
         Input: "programming"

Program: Remove all repeated characters from a given string
Input: "programming"

Output: "progamin"
 */
#include<stdio.h>
#include<string.h>

int main()
{
    char s[20] = "programming";
    int freq[256] = {0};
    int i, k;

    for(i = 0; s[i] != '\0'; i++)
        freq[(unsigned char)s[i]]++;

    for(i = 0; s[i]; i++)
    {
        if(freq[(unsigned char)s[i]] > 1)
        {
            freq[(unsigned char)s[i]]--;

            for(k = i; s[k]; k++)
                s[k] = s[k+1];

            i--;
        }
    }

    printf("%s", s);
}

