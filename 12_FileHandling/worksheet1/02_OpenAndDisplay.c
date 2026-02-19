/*
Open an existing file and display its contents on the screen.
Input: File name: test.txt
Output: Hello, this is my first file!
*/
#include<stdio.h>
int main()
{
FILE *fp;
char s[20];
fp=fopen("test.txt","r");
fscanf(fp,"%s",s);
fclose(fp);
printf("string is %s\n",s);
}

