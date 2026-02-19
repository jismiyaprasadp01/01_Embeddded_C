/*
Check prime and Armstrong number by making functions
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-1
 
Question: Write a program to check whether a given number is prime and/or Armstrong by using functions.
Sample data: Input: 153
Expected output: 153 is an Armstrong number and not a prime number.
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
int isArmstrong(int n)
{
    int temp = n, c = 0, r, mul, sum = 0, i;

    for(c = 0; temp; temp = temp / 10, c++);

    temp = n;

    while(temp)
    {
        r = temp % 10;
        mul = 1;

        for(i = 1; i <= c; i++)
            mul = mul * r;

        sum = sum + mul;
        temp = temp / 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num = 153;

    if(isArmstrong(num))
        printf("%d is an Armstrong number ", num);
    else
        printf("%d is not an Armstrong number ", num);

    if(isPrime(num))
        printf("and a prime number.");
    else
        printf("and not a prime number.");

    return 0;
}

