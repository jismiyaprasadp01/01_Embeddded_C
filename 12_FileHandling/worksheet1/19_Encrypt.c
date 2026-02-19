/*
Encrypt (scramble) a file’s content so it can’t be read easily.
Input: File name: secret.txt (content: my password)
Output: File now contains: (garbled/encrypted text)
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("secret.txt", "r+");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = ch + 3;

        fseek(fp, -1, SEEK_CUR);
        fputc(ch, fp);
    }

    fclose(fp);

    printf("File encrypted successfully\n");

    return 0;
}

