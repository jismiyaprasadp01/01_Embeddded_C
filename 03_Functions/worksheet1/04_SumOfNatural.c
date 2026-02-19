/*
Find the sum of natural numbers using recursion
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-re
 
Question: Write a recursive function to find the sum of natural numbers up to n.
Sample data: Input: 10
Expected output: Sum of natural numbers up to 10 is 55
*/
#include <stdio.h>

int sum(int n)
{
    if(n == 0)
        return 0;

    return n + sum(n - 1);
}

int main()
{
    int n = 10;
    printf("Sum of natural numbers up to %d is %d\n", n, sum(n));
}

