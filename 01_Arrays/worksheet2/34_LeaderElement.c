/*
Find leader elements in array
http://192.168.2.101/link/225#bkmrk-question-description-8
 
Question description:
Write a C program to find all leader elements in the array (elements greater than all elements to their right).
Sample data:
Input: 16 17 4 3 5 2
Expected output:
Leader elements: 17 5 2
*/
#include <stdio.h>

int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    int max = a[n - 1];

    printf("Leader elements: %d ", max);

    for(int i = n - 2; i >= 0; i--)
    {
        if(a[i] > max)
        {
            max = a[i];
            printf("%d ", max);
        }
    }

    printf("\n");
    return 0;
}


