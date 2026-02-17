/*
Find equilibrium index
http://192.168.2.101/link/225#bkmrk-question-description-9
 
Question description:
Write a C program to find the index where the sum of elements to the left is equal to the sum to the right.
Sample data:
Input: -7 1 5 2 -4 3 0
Expected output:
Equilibrium index is 3
*/
#include <stdio.h>

int main()
{
    int a[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = 7;

    int total = 0, leftSum = 0;

    for(int i = 0; i < n; i++)
        total += a[i];

    for(int i = 0; i < n; i++)
    {
        total -= a[i];

        if(leftSum == total)
        {
            printf("Equilibrium index is %d\n", i);
            return 0;
        }

        leftSum += a[i];
    }

    printf("No equilibrium index found\n");
    return 0;
}


