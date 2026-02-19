/*
Function Pointer Array for String Operations
Implement several string manipulation functions (reverseString, toUpperCase, countVowels), each accepting a string argument.
Store these functions in an array of function pointers.
Prompt the user to choose an operation and apply it to their input string using the selected function pointer.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef void (*StringFunc)(char *);

void reverseString(char *str)
{
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Result: %s\n", str);
}

void toUpperCase(char *str)
{
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);

    printf("Result: %s\n", str);
}

void countVowels(char *str)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
    {
        char c = tolower(str[i]);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            count++;
    }

    printf("Vowel count: %d\n", count);
}

int main()
{
    StringFunc funcs[3];
    char str[100];
    int choice;

    funcs[0] = reverseString;
    funcs[1] = toUpperCase;
    funcs[2] = countVowels;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    printf("Choose operation:\n");
    printf("0.Reverse  1.Uppercase  2.Count Vowels : ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 3)
        funcs[choice](str);
    else
        printf("Invalid choice\n");

    return 0;
}

