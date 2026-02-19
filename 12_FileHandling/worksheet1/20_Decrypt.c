/*
Decrypt a scrambled (encrypted) file and make it readable again.
Input: File name: secret.txt (content: encrypted)
Output: File now contains: my password
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
        ch = ch - 3;

        fseek(fp, -1, SEEK_CUR);
        fputc(ch, fp);
    }

    fclose(fp);

    printf("File decrypted successfully\n");

    return 0;
}

