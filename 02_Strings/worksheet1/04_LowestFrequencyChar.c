/*
Find lowest Frequency Character in a string
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int freq[256] = {0};
    int i, min = 999;
    char minChar;

    printf("Enter string:\n");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
        {
	freq[s[i]]++;
        if(freq[s[i]] < min)
        {
            min = freq[s[i]];
            minChar = s[i];
        }
    }

    printf("Minimum frequency character: %c\n", minChar);
    printf("Count: %d\n", min);

    return 0;
}

