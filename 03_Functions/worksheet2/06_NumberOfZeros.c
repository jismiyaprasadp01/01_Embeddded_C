/*
   Count the number of zeroes in an integer using recursion.
 */
#include<stdio.h>

int zeros(int num)
{
        int c = 0;

        if(num == 0)
                return 0;

        if(num % 10 == 0)
                c++;

        return c + zeros(num / 10);
}

int main()
{
        int num = 1050;
        printf("Number of zeros is %d\n", zeros(num));
}

