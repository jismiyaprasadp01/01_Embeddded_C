/*
Find the minimum and maximum element using minimum comparisons
http://192.168.2.101/link/225#bkmrk-question-description-15
 
Question description:
Write a C program to find minimum and maximum elements using minimum number of comparisons.
Sample data:
Input: 1000 11 445 1 330 3000
Expected output:
Minimum element is 1 Maximum element is 3000
*/
#include <stdio.h>

int main()
{
    int a[] = {2, 3, 10, 6, 4, 8, 1};
    int n = 7;

    int minVal = a[0];
    int minDiff = a[1] - a[0];

    if(minDiff < 0)
        minDiff = -minDiff;

    for(int i = 1; i < n; i++)
    {
        int diff = a[i] - minVal;

        if(diff < 0)
            diff = -diff;

        if(diff < minDiff)
            minDiff = diff;

        if(a[i] < minVal)
            minVal = a[i];
    }

    printf("Minimum difference: %d\n", minDiff);

    return 0;
}


