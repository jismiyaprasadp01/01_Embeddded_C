/*
Max & Min Array Values Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-c-
 
Question: Write a C program to find the maximum and minimum of some values using a function that returns an array.
Sample data: Input values: 25 11 35 65 20
Expected output:
Minimum value is: 11
Maximum value is: 65

*/
#include <stdio.h>

int* findMinMax(int arr[], int n)
{
    static int result[2];
    int min = arr[0], max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    result[0] = min;
    result[1] = max;

    return result;
}

int main()
{
    int arr[] = {25, 11, 35, 65, 20};
    int n = 5;

    int *res = findMinMax(arr, n);

    printf("Minimum value is: %d\n", res[0]);
    printf("Maximum value is: %d\n", res[1]);
}

