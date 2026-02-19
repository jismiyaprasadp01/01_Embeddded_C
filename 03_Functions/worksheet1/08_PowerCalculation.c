/*
Calculate the power of a number using recursion
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-re-4
 
Question: Write a recursive function to calculate the power of a number (base^exponent).
Sample data: Input: base=2, exponent=5
Expected output: 2^5 = 32

*/
#include <stdio.h>

int power(int base, int exp)
{
    if(exp == 0)
        return 1;

    return base * power(base, exp - 1);
}

int main()
{
    int base = 2, exponent = 5;
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));
}

