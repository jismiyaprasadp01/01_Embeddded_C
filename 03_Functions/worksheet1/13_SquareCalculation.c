/*
Square Calculation Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-4
 
Question: Write a program in C to find the square of any number using the function.
Sample data: Input: 20
Expected output: The square of 20 is : 400.00
*/
#include <stdio.h>

float square(float n)
{
    return n * n;
}

int main()
{
    float num = 20;
    printf("The square of %.0f is : %.2f", num, square(num));
}

