/*
Exercise 4: Compare malloc and calloc
Goal: Learn the key difference between malloc and calloc.

Activity:
Allocate two arrays using malloc and calloc with the same size.
Print the default values in both arrays.
Use a loop for printing to understand initialization differences.
Free both arrays.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr1, *arr2;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)calloc(n, sizeof(int));

    if (arr1 == NULL || arr2 == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Values in malloc array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nValues in calloc array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    free(arr1);
    free(arr2);

    return 0;
}

