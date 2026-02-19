/*
Exercise 18: Insert Element at Any Position
Goal: Modify dynamic array and shift elements.

Activity:

http://192.168.2.101/link/168#bkmrk-allocate-memory-for--1
 
Allocate memory for an array.
Accept n values.
Ask user to insert a value at a specific position.
Use realloc to increase size.
Shift elements and insert new value.
Print final array and free memory.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, pos, value;

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
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    arr = (int *)realloc(arr, (n + 1) * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

