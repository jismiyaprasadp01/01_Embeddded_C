/*
Swap Numbers Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-5
 
Question: Write a program in C to swap two numbers using a function.
Sample data: Input 1st number: 2, Input 2nd number: 4
Expected output: Before swapping: n1 = 2, n2 = 4
After swapping: n1 = 4, n2 = 2
*/
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n1 = 2, n2 = 4;

    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);

    swap(&n1, &n2);

    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}

