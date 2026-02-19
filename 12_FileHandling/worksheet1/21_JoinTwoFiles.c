/*
Join two files together and save the result in a new file.
Input: File 1: a.txt (AAA)
File 2: b.txt (BBB)
New file: ab.txt
Output: ab.txt content: AAA
BBB
*/
#include <stdio.h>
int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch;

    fp1 = fopen("a.txt", "r");
    fp2 = fopen("b.txt", "r");
    fp3 = fopen("ab.txt", "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("File error\n");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);

    fputc('\n', fp3);

    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully\n");

    return 0;
}

