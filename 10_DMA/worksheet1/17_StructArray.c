/*
Exercise 17: Struct Array with Dynamic Allocation
Goal: Allocate memory for array of structs.

Activity:
Define a struct (e.g., name and age).
Ask user how many entries to store.
Allocate memory using malloc.
Accept values and display them.
Free the memory.
*/
#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person *p;
    int n, i;

    printf("Enter number of persons: ");
    scanf("%d", &n);

    p = (struct Person *)malloc(n * sizeof(struct Person));

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter name and age of person %d:\n", i + 1);
        scanf("%s %d", p[i].name, &p[i].age);
    }

    printf("\nDetails:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s, Age: %d\n", p[i].name, p[i].age);
    }

    free(p);

    return 0;
}

