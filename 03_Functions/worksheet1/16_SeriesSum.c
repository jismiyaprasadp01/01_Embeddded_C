/*
Series Sum Using Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-7
 
Question: Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using a function.
Expected output: The sum of the series is : 34

*/
#include <stdio.h>

int fact(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
        f = f * i;

    return f;
}

int main()
{
    int sum = 0;

    for(int i = 1; i <= 5; i++)
    {
        sum += fact(i) / i;
    }

    printf("The sum of the series is : %d", sum);
}

