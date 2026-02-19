/*
Delete a file from the computer.
Input: File name: temp.txt
Output: File 'temp.txt' deleted.
*/
#include <stdio.h>

int main()
{
    if (remove("temp.txt") == 0)
        printf("File 'temp.txt' deleted.\n");
    else
        printf("File not found or cannot delete.\n");

    return 0;
}

