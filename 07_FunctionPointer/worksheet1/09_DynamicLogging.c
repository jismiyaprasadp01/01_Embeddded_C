/*
Dynamic Logging Mechanism
Implement three logging functions (consoleLog, fileLog, networkLog) with a common signature.
Allow the program to select the appropriate logging method dynamically through function pointers.
Demonstrate switching between logging methods at runtime based on user input.
*/
#include <stdio.h>

typedef void (*Logger)(char *);

void consoleLog(char *msg)
{
    printf("Console Log: %s\n", msg);
}

void fileLog(char *msg)
{
    FILE *fp = fopen("log.txt", "a");
    if (fp != NULL)
    {
        fprintf(fp, "File Log: %s\n", msg);
        fclose(fp);
    }
}

void networkLog(char *msg)
{
    printf("Network Log: %s (sent over network)\n", msg);
}

int main()
{
    Logger logFunc;
    int choice;
    char message[100];

    printf("Enter message: ");
    scanf(" %[^\n]", message);

    printf("Select logging method:\n");
    printf("1.Console  2.File  3.Network : ");
    scanf("%d", &choice);

    if (choice == 1)
        logFunc = consoleLog;
    else if (choice == 2)
        logFunc = fileLog;
    else
        logFunc = networkLog;

    logFunc(message);

    return 0;
}

