/*
Exercise 6: Log Session a Dynamic 2D Array
Goal: Learn how to allocate and access a 2D array dynamically.

Activity:
Ask the user for number of rows and columns.
Allocate memory for an array of row pointers.
Allocate each row separately using malloc.
Accept values for each row-column index.
Display the matrix.
Free each row and then the row pointer array.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, rows, cols;
    int **arr;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    arr = (int **)malloc(rows * sizeof(int *));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));

        if (arr[i] == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }
    }

    printf("Enter matrix values:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        free(arr[i]);
    }

    free(arr);

    return 0;
}

