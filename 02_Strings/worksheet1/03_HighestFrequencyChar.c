/*
Program: Find highest frequency character in a string
          Input: "engineering"
          Output: 'e' appears 3 times
*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter string:\n");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        freq[s[i]]++;

        if(freq[s[i]] > max)
        {
            max = freq[s[i]];
            maxChar = s[i];
        }
    }

    printf("Highest frequency character: %c\n", maxChar);
    printf("Count: %d\n", max);

    return 0;
}

   
