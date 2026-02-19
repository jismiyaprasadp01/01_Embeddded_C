/*
   Show all the contents in a file and also print the total number of lines.
Input: File name: lines.txt
Output: (shows all lines)
Total lines: 5
 */
#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int count = 0;
	fp = fopen("lines.txt", "r");

	if (fp == NULL)
	{
		printf("File not found\n");
		return 1;
	}
	printf("File contents:\n");
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);

		if (ch == '\n')
			count++;
	}

	fclose(fp);
	printf("\nTotal lines: %d\n", count);
	return 0;
}

