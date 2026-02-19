/*
ake several lines from the user and write all of them into a file.
Input: File name: lines.txt
Number of lines: 3
Lines: Line one, Line two, Line three
Output: All lines saved in 'lines.txt'.
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    int i, num;
    char s[100][20];

    printf("Enter the number of lines\n");
    scanf("%d", &num);

    printf("Enter the strings\n");
    for(i = 0; i < num; i++)
        scanf("%s", s[i]);

    fp = fopen("Lines.txt", "w+");

    if(fp == NULL)
    {
        printf("File not opened\n");
        return 1;
    }

    for(i = 0; i < num; i++)
        fprintf(fp, "%s\n", s[i]);

    fclose(fp);

    printf("All lines saved in 'Lines.txt'\n");

    return 0;
}

