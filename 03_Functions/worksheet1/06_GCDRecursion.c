/*
Find G.C.D using recursion
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-re-2
 
Question: Write a recursive function to find the GCD of two numbers.
Sample data: Input: 56 and 98
Expected output: GCD of 56 and 98 is 14
*/
#include <stdio.h>
int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a = 56, b = 98;
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
}

