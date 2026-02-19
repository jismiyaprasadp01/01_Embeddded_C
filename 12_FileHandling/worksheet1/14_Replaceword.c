/*
	Replace every use of a chosen word in a file with a different word.
Input: File name: info.txt
Word to replace: file
Replacement: document
Output: Content after: This is a test document.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp, *temp;
    char word[50], newWord[50];
    char str[200];

    fp = fopen("info.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("File error\n");
        return 1;
    }

    printf("Enter word to replace: ");
    scanf("%s", word);

    printf("Enter replacement word: ");
    scanf("%s", newWord);

    while (fgets(str, sizeof(str), fp))
    {
        char *pos;

        while ((pos = strstr(str, word)) != NULL)
        {
            char buffer[200];
            int index = pos - str;

            buffer[0] = '\0';
            strncat(buffer, str, index);
            strcat(buffer, newWord);
            strcat(buffer, pos + strlen(word));

            strcpy(str, buffer);
        }

        fputs(str, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("info.txt");
    rename("temp.txt", "info.txt");

    printf("Word replaced successfully\n");

    return 0;
}

