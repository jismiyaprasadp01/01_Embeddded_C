/*
   Add more lines to the end of a file without erasing its current content.
Input: File name: lines.txt
Number of new lines: 2
New lines: Line four, Line five
Output: File now contains: Line one, Line two, Line three, Line four, Line five
 */
#include <stdio.h>
int main()
{
	FILE *fp;
	char line[50];
	int n, i;
	fp = fopen("lines.txt", "a");
	if (fp == NULL)
	{
		printf("File not found\n");
		return 1;
	}
	printf("Enter number of new lines: ");
	scanf("%d", &n);
	getchar();
	printf("Enter new lines:\n");
	for(i = 0; i < n; i++)
	{
		fgets(line, 50, stdin);
		fputs(line, fp);
	}

	fclose(fp);
	printf("Lines added successfully\n");
	return 0;
}

