/*
Exercise 2: Allocate and Store a List of Integers
Goal: Practice allocating memory for an array of integers.

Activity:
 
Ask the user to enter the number of integers.
Allocate memory dynamically using malloc based on input.
Use a loop to take integer inputs into the allocated array.
Display the entered values.
Free the allocated memory.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
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

