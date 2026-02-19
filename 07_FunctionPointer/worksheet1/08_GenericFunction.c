/*
Generic Find Function
Implement a generic function find that takes an integer array, its size, and a function pointer as a condition.
Log Session condition functions (e.g., isEven, isPositive, isPrime).
Use find to identify and print the first element matching the provided condition.
*/
#include <stdio.h>

typedef int (*Condition)(int);

int isEven(int n)
{
    return n % 2 == 0;
}

int isPositive(int n)
{
    return n > 0;
}

int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

void find(int arr[], int size, Condition cond)
{
    for (int i = 0; i < size; i++)
    {
        if (cond(arr[i]))
        {
            printf("First matching element: %d\n", arr[i]);
            return;
        }
    }

    printf("No matching element found\n");
}

int main()
{
    int arr[] = { -3, -1, 4, 9, 11 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Finding Even:\n");
    find(arr, size, isEven);

    printf("Finding Positive:\n");
    find(arr, size, isPositive);

    printf("Finding Prime:\n");
    find(arr, size, isPrime);

    return 0;
}

