/*
Exercise 10: Log Session and Reverse an Array
Goal: Use pointers to reverse dynamically allocated memory.

Activity:
Allocate an array of integers using malloc.
Accept n values.
Reverse the array using pointer arithmetic (not indexing).
Print reversed values.
Free the memory.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr, temp;
    int *start, *end;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    start = arr;
    end = arr + n - 1;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    free(arr);

    return 0;
}

