/*
Find the union of two arrays
http://192.168.2.101/link/225#bkmrk-question-description
 
Question description:
Write a C program to find the union of two arrays (all unique elements from both arrays).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Union: 1 2 3 4 5 6
*/
#include <stdio.h>
void unionArray(int a[], int n1, int b[], int n2)
{
    int i, j, found;

    printf("Union: ");

    for(i = 0; i < n1; i++)
        printf("%d ", a[i]);

    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < n1; j++)
        {
            if(b[i] == a[j])
            {
                found = 1;
                break;
            }
        }

        if(!found)
            printf("%d ", b[i]);
    }

    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};

    unionArray(a, 4, b, 4);

    return 0;
}


