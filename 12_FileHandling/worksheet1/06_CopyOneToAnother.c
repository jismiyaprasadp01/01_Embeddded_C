/*
Copy everything from one file and save it into another file.
Input: Source file: lines.txt
Destination file: copy.txt
Output: File 'lines.txt' copied to 'copy.txt'.
*/

#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("lines.txt", "r");
    fp2 = fopen("copy.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File error\n");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp2);

    fclose(fp1);
    fclose(fp2);

    printf("File 'lines.txt' copied to 'copy.txt'\n");

    return 0;
}

