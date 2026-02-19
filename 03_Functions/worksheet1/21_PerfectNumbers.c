/*
Perfect Numbers in Range Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-12
 
Question: Write a program in C to print all perfect numbers in a given range using a function.
Sample data: Range: 1 to 100
Expected output: The perfect numbers between 1 to 100 are : 6 28

*/
#include <stdio.h>

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
    int start = 1, end = 100;

    printf("The perfect numbers between %d to %d are : ", start, end);

    for(int i = start; i <= end; i++)
    {
        if(isPerfect(i))
            printf("%d ", i);
    }
}

