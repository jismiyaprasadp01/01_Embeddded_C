/*
Remove a specific line (by line number) from a file.
Input: File name: lines.txt
Line to remove: 2
Output: File now contains all lines except line 2.
*/
#include <stdio.h>
int main()
{
    FILE *fp, *temp;
    char line[100];
    int lineNo, count = 1;

    fp = fopen("lines.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("File error\n");
        return 1;
    }

    printf("Enter line number to remove: ");
    scanf("%d", &lineNo);

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        if (count != lineNo)
            fputs(line, temp);

        count++;
    }

    fclose(fp);
    fclose(temp);

    remove("lines.txt");
    rename("temp.txt", "lines.txt");

    printf("Line removed successfully\n");

    return 0;
}

