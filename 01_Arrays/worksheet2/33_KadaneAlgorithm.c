/*
Find subarray with maximum sum (Kadane’s Algorithm)
http://192.168.2.101/link/225#bkmrk-question-description-7
 
Question description:
Write a C program to find the maximum sum of a contiguous subarray.
Sample data:
Input: -2 -3 4 -1 -2 1 5 -3
Expected output:
Maximum contiguous sum is 7
*/
#include <stdio.h>

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;

    int maxSum = a[0];
    int currentSum = 0;

    for(int i = 0; i < n; i++)
    {
        currentSum += a[i];

        if(currentSum > maxSum)
            maxSum = currentSum;

        if(currentSum < 0)
            currentSum = 0;
    }

    printf("Maximum contiguous sum is %d\n", maxSum);

    return 0;
}

