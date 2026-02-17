/*
Find the difference of two arrays
http://192.168.2.101/link/225#bkmrk-question-description-2
 
Question description:
Write a C program to find the difference of two arrays (elements present in first array but not in second).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Difference (Array1 - Array2): 1 2
*/
#include <stdio.h>

void differenceArray(int a[], int n1, int b[], int n2)
{
    int i, j, found;

    printf("Difference (Array1 - Array2): ");

    for(i = 0; i < n1; i++)
    {
        found = 0;

        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                found = 1;
                break;
            }
        }

        if(!found)
            printf("%d ", a[i]);
    }

    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};

    differenceArray(a, 4, b, 4);

    return 0;
}


