/*
Merge alternate lines from two files into a third file.
Input: File 1: a.txt (A1, A2)
File 2: b.txt (B1, B2)
New file: merge.txt
Output: merge.txt: A1, B1, A2, B2
*/
#include <stdio.h>
int main()
{
    FILE *fp1, *fp2, *fp3;
    char line1[100], line2[100];

    fp1 = fopen("a.txt", "r");
    fp2 = fopen("b.txt", "r");
    fp3 = fopen("merge.txt", "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("File error\n");
        return 1;
    }

    while (fgets(line1, 100, fp1) != NULL ||
           fgets(line2, 100, fp2) != NULL)
    {
        if (!feof(fp1))
            fputs(line1, fp3);

        if (!feof(fp2))
            fputs(line2, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged alternately\n");

    return 0;
}

