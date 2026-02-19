/*
Make a new file and save some text entered by the user.
Input: File name: test.txt
Text: Hello, this is my first file!
Output: File 'test.txt' created and saved.
*/
#include<stdio.h>
int main()
{
FILE *fp;
char s[20];
printf("Enter the string\n");
scanf("%[^\n]",s);
fp=fopen("test.txt","w+");
fprintf(fp,"%s",s);
fclose(fp);
printf("File 'test.txt' created and saved\n");
}


