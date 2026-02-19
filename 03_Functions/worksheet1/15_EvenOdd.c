/*
Even/Odd Check Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-6
 
Question: Write a program in C to check if a given number is even or odd using a function.
Sample data: Input: 5
Expected output: The entered number is odd.

*/
#include <stdio.h>

void checkEvenOdd(int n)
{
    if(n % 2 == 0)
        printf("The entered number is even.");
    else
        printf("The entered number is odd.");
}

int main()
{
    int num = 5;
    checkEvenOdd(num);
}

