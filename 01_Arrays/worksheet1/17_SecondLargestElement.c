/*
Question: Find second largest element
Question description: Write a C program to find the second largest number in the array.
Sample data:
Input: 10 20 50 40
Expected output:
Second largest: 40
*/
#include<stdio.h>                  
int main()
{
        int arr[10],ele;
        printf("Enter the number of elements\n");
        scanf("%d",&ele);
        printf("Enter the array elements\n");
        for(int i=0;i<ele;i++)
                scanf("%d",&arr[i]);
        l = arr[0];
    sl = arr[1];

    if(sl > l)
    {
        int temp = l;
        l = sl;
        sl = temp;
    }

    for(int i = 2; i < ele; i++)
    {
        if(arr[i] > l)
        {
            sl = l;
            l = arr[i];
        }
        else if(arr[i] > sl && arr[i] != l)
        {
            sl = arr[i];
        }
    }

    printf("Second Largest: %d\n", sl);
}
