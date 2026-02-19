/*
Exercise 3: Zero-Initialize an Integer Array
Goal: Understand how calloc initializes memory.

Activity:
 
Ask the user for the number of elements.
Allocate memory using calloc.
Print the initial values (before user input).
Assign values, then display them.
Free the memory after use.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Initial values:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter %d values:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Entered values are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

