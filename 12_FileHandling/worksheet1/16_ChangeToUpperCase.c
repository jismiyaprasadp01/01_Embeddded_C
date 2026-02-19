/*
Change all the letters in a file to uppercase.
Input: File name: info.txt (content: Hello World!)
Output: HELLO WORLD!
*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("info.txt", "r+");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        fseek(fp, -1, SEEK_CUR);
        fputc(toupper(ch), fp);
    }

    fclose(fp);

    printf("File converted to uppercase\n");

    return 0;
}

