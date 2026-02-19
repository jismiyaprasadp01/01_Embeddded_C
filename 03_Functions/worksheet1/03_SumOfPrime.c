/*
Check whether a number can be expressed as the sum of two prime numbers
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-2
 
Question: Write a program to check if a number can be expressed as the sum of two prime numbers using functions.
Sample data: Input: 34
Expected output: 34 = 3 + 31
*/
#include <stdio.h>

int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i<n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}
int main()
{
    int num = 34;

    for(int a = 2; a < num; a++)
    {
        int b = num - a;

        if(isPrime(a) && isPrime(b))
        {
            printf("%d = %d + %d\n", num, a, b);
            break;
        }
    }
}
