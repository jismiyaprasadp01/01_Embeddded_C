/*
Prime Check Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-9
 
Question: Write a program in C to check whether a number is prime or not using a function.
Sample data: Input: 5
Expected output: The number 5 is a prime number.
*/
#include <stdio.h>

int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num = 5;

    if(isPrime(num))
        printf("The number %d is a prime number.", num);
    else
        printf("The number %d is not a prime number.", num);
}

