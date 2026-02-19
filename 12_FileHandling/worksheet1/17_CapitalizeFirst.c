/*
Capitalize the first letter of each word in a file.
Input: File name: info.txt (content: hello world!)
Output: Hello World!
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int newWord = 1;

    fp = fopen("info.txt", "r+");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (newWord && isalpha(ch))
        {
            ch = toupper(ch);
            newWord = 0;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t')
            newWord = 1;

        fseek(fp, -1, SEEK_CUR);
        fputc(ch, fp);
    }

    fclose(fp);

    printf("First letter of each word capitalized\n");

    return 0;
}

