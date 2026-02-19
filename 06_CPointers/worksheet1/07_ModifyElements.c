/*
Modify Array Elements Using Pointers
Goal: Learn to modify values in an array using pointer operations.

Activity:

Log Session int arr[] = {2, 4, 6};
Use pointer arithmetic to increase each element by 1.
Print modified array.
*/
#include<stdio.h>

int main()
{
    int arr[] = {2, 4, 6};
    int *p = arr;

    for(int i = 0; i < 3; i++)
        printf("%d ", ++(*(p + i)));

    return 0;
}

