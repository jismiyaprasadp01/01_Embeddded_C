/*
Function Pointer as Return Value
Implement multiple arithmetic functions (add, subtract, multiply).
Write a function getOperation(char *name) that takes a string (like "add" or "subtract") and returns a pointer to the corresponding function.
Use this return value to perform the selected operation on user-provided numbers.
*/
#include <stdio.h>
#include <string.h>

typedef int (*Operation)(int, int);

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

Operation getOperation(char *name)
{
    if (strcmp(name, "add") == 0)
        return add;
    else if (strcmp(name, "subtract") == 0)
        return subtract;
    else if (strcmp(name, "multiply") == 0)
        return multiply;
    else
        return NULL;
}

int main()
{
    char op[20];
    int a, b;
    Operation func;

    printf("Enter operation (add/subtract/multiply): ");
    scanf("%s", op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    func = getOperation(op);

    if (func != NULL)
        printf("Result = %d\n", func(a, b));
    else
        printf("Invalid operation\n");

    return 0;
}

