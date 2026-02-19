/*
Armstrong & Perfect Number Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-11
 
Question: Write a program in C to check Armstrong and Perfect numbers using a function.
Sample data: Input: 371
Expected output: 371 is an Armstrong number.
371 is not a Perfect number.

*/
#include <stdio.h>

int isArmstrong(int n)
{
    int temp = n, rem, sum = 0;

    while(temp > 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return (sum == n);
}

int isPerfect(int n)
{
    int sum = 0;

    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main()
{
    int num = 371;

    if(isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    if(isPerfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);
}

