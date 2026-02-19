/*
Check if one string is a rotation of another, i.e., one string can be shifted to get the other.
Input: "abcd", "cdab"
Output: Yes
*/
#include<stdio.h>
#include<string.h>

int string_rot(char *s, char *m)
{
    if(strlen(s) != strlen(m))
        return 0;

    char temp[60];
    strcpy(temp, s);
    strcat(temp, s);

    if(strstr(temp, m) != NULL)
        return 1;

    return 0;
}

int main()
{
    char s[30] = "abcd";
    char m[30] = "cdab";

    if(string_rot(s, m))
        printf("Rotation\n");
    else
        printf("Not rotation\n");
}


