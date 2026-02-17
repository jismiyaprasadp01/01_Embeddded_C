/*
Find the maximum difference between two elements such that larger element appears after the smaller
http://192.168.2.101/link/225#bkmrk-question-description-14
 
Question description:
Write a C program to find the maximum difference between two elements in an array such that the larger element appears after the smaller element.
Sample data:
Input: 2 3 10 6 4 8 1
Expected output:
Maximum difference: 8 (10 - 2)
*/
#include <stdio.h>

int main()
{
    int a[] = {2, 3, 10, 6, 4, 8, 1};
    int n = 7;

    int min = a[0];
    int maxDiff = a[1] - a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] - min > maxDiff)
            maxDiff = a[i] - min;

        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum difference: %d\n", maxDiff);

    return 0;
}


