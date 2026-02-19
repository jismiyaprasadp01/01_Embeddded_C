/*
Exercise 15: Dynamic Menu-Driven Array
Goal: Handle operations on a dynamic array with growing size.

Activity:
Start with an empty array.
Provide a menu with options: Add element, Display, Exit.
Use realloc each time user adds an element.
Print array contents.
Free memory on exit.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = NULL;
    int choice, value;
    int size = 0;

    while (1)
    {
        printf("\n1. Add element\n2. Display\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter value: ");
            scanf("%d", &value);

            arr = (int *)realloc(arr, (size + 1) * sizeof(int));

            if (arr == NULL)
            {
                printf("Memory allocation failed\n");
                return 1;
            }

            arr[size] = value;
            size++;
        }
        else if (choice == 2)
        {
            if (size == 0)
            {
                printf("Array is empty\n");
            }
            else
            {
                printf("Array elements:\n");
                for (int i = 0; i < size; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        }
        else if (choice == 3)
        {
            free(arr);
            printf("Memory freed. Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}

