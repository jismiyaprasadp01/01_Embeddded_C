/*
Convert a numeric string to an integer without using built-in functions.
Input: "1234"
Output: 1234
*/
#include <stdio.h>
int str_to_int(char *s)
{
    int i = 0, num = 0;

    while(s[i] != '\0')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return num;
}

int main()
{
    char s[] = "1234";
    int result = str_to_int(s);

    printf("%d\n", result);
}

