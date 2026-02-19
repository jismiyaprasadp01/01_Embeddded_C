/*
Exercise 1: Allocate Memory for an Integer
Goal: Understand how to allocate memory for a single variable using malloc.

Activity:
 
Log Session a pointer to an integer.
Use malloc to allocate memory for one integer.
Assign a value to that memory.
Print the value through the pointer.
Free the allocated memory.
Include NULL check after malloc
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 25;

    printf("Value stored in allocated memory: %d\n", *ptr);

    free(ptr);

    return 0;
}

