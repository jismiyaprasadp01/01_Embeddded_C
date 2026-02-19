/*
Read every line from a file and store those lines in an array.
Input: File name: lines.txt
Output: Line one, Line two, Line three (as array elements)
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char lines[10][50];
    int i = 0;

    fp = fopen("lines.txt", "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    while (fgets(lines[i], 50, fp) != NULL)
        i++;

    fclose(fp);

    printf("Lines in array:\n");
    for (int j = 0; j < i; j++)
        printf("%s", lines[j]);

    return 0;
}

