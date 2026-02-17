/*
Find the intersection of two arrays
http://192.168.2.101/link/225#bkmrk-question-description-1
 
Question description:
Write a C program to find the intersection of two arrays (common elements).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Intersection: 3 4
*/
#include <stdio.h>
void intersectionArray(int a[], int n1, int b[], int n2)
{
    int i, j;

    printf("Intersection: ");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};

    intersectionArray(a, 4, b, 4);

    return 0;
}


