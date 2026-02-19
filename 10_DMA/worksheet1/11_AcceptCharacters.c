/*
Exercise 11: Accept Characters Until Enter Pressed
Goal: Dynamically grow a string buffer with realloc.

Activity:
 Start with a small buffer.
Accept characters one by one.
Reallocate buffer each time a new character is added.
Stop on newline character.
Null-terminate and print the string.
Free the memory.
*/#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = NULL;
    char ch;
    int size = 0, i = 0;

    str = (char *)malloc(sizeof(char));

    if (str == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter characters (press Enter to stop):\n");

    while ((ch = getchar()) != '\n')
    {
        str = (char *)realloc(str, (size + 2) * sizeof(char));

        if (str == NULL)
        {
            printf("Memory reallocation failed\n");
            return 1;
        }

        str[i++] = ch;
        size++;
    }

    str[i] = '\0';

    printf("You entered: %s\n", str);

    free(str);

    return 0;
}

