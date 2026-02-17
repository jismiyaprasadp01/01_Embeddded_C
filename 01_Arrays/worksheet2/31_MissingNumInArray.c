/*
Find missing number in array
http://192.168.2.101/link/225#bkmrk-question-description-5
 
Question description:
Write a C program to find the missing number in an array of size n containing numbers from 1 to n+1.
Sample data:
Input: 1 2 4 5 6
Expected output:
Missing number is: 3
*/
#include <stdio.h>

int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int n = 5;

    int totalSum = (n + 1) * (n + 2) / 2;
    int arraySum = 0;

    for(int i = 0; i < n; i++)
        arraySum += a[i];

    int missing = totalSum - arraySum;

    printf("Missing number is: %d\n", missing);

    return 0;
}

