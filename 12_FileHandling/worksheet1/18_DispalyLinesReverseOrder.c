/*
Display the lines of a file in reverse order (from last to first).
Input: File name: lines.txt
Output: Shows lines from bottom to top
*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char lines[100][100];
    int count = 0;

    fp = fopen("lines.txt", "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    while (fgets(lines[count], 100, fp) != NULL)
        count++;

    fclose(fp);

    printf("Lines in reverse order:\n");
    for (int i = count - 1; i >= 0; i--)
        printf("%s", lines[i]);

    return 0;
}
