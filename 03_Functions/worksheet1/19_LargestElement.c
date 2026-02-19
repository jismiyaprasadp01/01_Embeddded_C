/*
Largest Element in Array Function Variants
http://192.168.2.101/link/226#bkmrk-question%3A-write-a-pr-10
 
Question: Write a program in C to get the largest element of an array using a function.
Sample data: Array size: 5
Elements: 1 2 3 4 5
Expected output: The largest element in the array is : 5

*/
#include <stdio.h>

int findLargest(int arr[], int n)
{
    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("The largest element in the array is : %d", findLargest(arr, size));
}

