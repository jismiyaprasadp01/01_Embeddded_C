/*
Decimal to Binary Conversion Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-8
 
Question: Write a program in C to convert a decimal number to a binary number using a function.
Sample data: Input: 65
Expected output: The Binary value is : 1000001

*/
#include <stdio.h>

long decimalToBinary(int n)
{
    long binary = 0, place = 1;
    int rem;

    while(n > 0)
    {
        rem = n % 2;
        binary += rem * place;
        n /= 2;
        place *= 10;
    }

    return binary;
}

int main()
{
    int num = 65;
    printf("The Binary value is : %ld", decimalToBinary(num));
}

