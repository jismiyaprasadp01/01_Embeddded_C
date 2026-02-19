/*
Calculate the factorial of a number using recursion
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-re-1
 
Question: Write a recursive function to calculate the factorial of a given number.
Sample data: Input: 5
Expected output: Factorial of 5 is 120

*/
#include <stdio.h>

int fact(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n = 5;
    printf("Factorial of %d is %d\n", n, fact(n));
}

