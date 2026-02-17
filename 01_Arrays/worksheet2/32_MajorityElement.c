/*
Find the majority element
http://192.168.2.101/link/225#bkmrk-question-description-6
 
Question description:
Write a C program to find the majority element in an array (element appearing more than n/2 times).
Sample data:
Input: 2 2 1 2 3 2 2
Expected output:
Majority element: 2
*/
#include <stdio.h>
int main()
{
    int a[] = {2, 2, 1, 2, 3, 2, 2};
    int n = 7;

    int i, j, count;

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > n/2)
        {
            printf("Majority element: %d\n", a[i]);
            break;
        }
    }

    return 0;
}


