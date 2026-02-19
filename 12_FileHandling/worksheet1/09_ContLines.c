/*
Count how many lines are present in a text file.
Input: File name: lines.txt
Output: Total lines: 5
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("lines.txt", "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
            count++;
    }

    fclose(fp);

    printf("Total lines: %d\n", count);

    return 0;
}

