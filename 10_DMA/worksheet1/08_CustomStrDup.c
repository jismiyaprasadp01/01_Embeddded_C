/*
Exercise 8: Implement Custom strdup()
Goal: Practice duplicating a string using dynamic memory.

Activity:
Log Session a function that takes a string as input.
Allocate memory for a copy of the string.
Copy character by character.
Return the copied string.
Call this function and display the result.
Free the copied string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strdup(const char *str)
{
    int i, len;
    char *copy;

    len = strlen(str);

    copy = (char *)malloc((len + 1) * sizeof(char));

    if (copy == NULL)
    {
        return NULL;
    }

    for (i = 0; i <= len; i++)
    {
        copy[i] = str[i];
    }

    return copy;
}

int main()
{
    char str[100];
    char *dup;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    dup = my_strdup(str);

    if (dup == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Duplicated string: %s\n", dup);

    free(dup);

    return 0;
}

