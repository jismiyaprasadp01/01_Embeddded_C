/*
Display all prime numbers between two intervals
Question: Write a program to display all prime numbers between two given intervals using functions.
Sample data: Interval: 10 to 30
Expected output: 11 13 17 19 23 29

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
    int start = 10, end = 30;

    for(int i = start; i <= end; i++)
    {
        if(isPrime(i))
            printf("%d ", i);
    }

    return 0;
}

