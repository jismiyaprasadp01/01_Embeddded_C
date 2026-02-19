/*
Anagram Check Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-13
 
Question: Write a program in C to check whether two given strings are an anagram.
Sample data: String1: spare
String2: pears
Expected output: spare and pears are Anagram.
*/
#include <stdio.h>
#include <string.h>

int isAnagram(char s1[], char s2[])
{
    int freq[256] = {0};

    if(strlen(s1) != strlen(s2))
        return 0;

    for(int i = 0; s1[i]; i++)
    {
        freq[(unsigned char)s1[i]]++;
        freq[(unsigned char)s2[i]]--;
    }

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    char s1[] = "spare";
    char s2[] = "pears";

    if(isAnagram(s1, s2))
        printf("%s and %s are Anagram.", s1, s2);
    else
        printf("%s and %s are not Anagram.", s1, s2);
}

