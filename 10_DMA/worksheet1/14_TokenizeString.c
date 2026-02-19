/*
Exercise 14: Tokenize String Dynamically
Goal: Store each word of a sentence in dynamically allocated memory.

Activity:
Accept a sentence as input.
Use strtok() to split it into words.
Use malloc to copy each token into a new memory block.
Store them in a pointer array.
Print all words and free each block.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sentence[200];
    char *token;
    char *words[50];
    int count = 0, i;

    printf("Enter a sentence:\n");
    scanf(" %[^\n]", sentence);

    token = strtok(sentence, " ");

    while (token != NULL)
    {
        words[count] = (char *)malloc((strlen(token) + 1) * sizeof(char));

        if (words[count] == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        strcpy(words[count], token);
        count++;

        token = strtok(NULL, " ");
    }

    printf("Words are:\n");
    for (i = 0; i < count; i++)
    {
        printf("%s\n", words[i]);
    }

    for (i = 0; i < count; i++)
    {
        free(words[i]);
    }

    return 0;
}

