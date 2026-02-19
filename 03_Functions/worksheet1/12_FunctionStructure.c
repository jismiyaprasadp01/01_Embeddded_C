/*
Simple Function Structure Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-3
 
Question: Write a program in C to show the simple structure of a function.
Expected output: The total is : 11
*/
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 6;
    int total = add(x, y);

    printf("The total is : %d", total);
}

