/*
Question: Sum of even numbers
Question description: Write a C program to find the sum of all even numbers in an array.
Sample data:
Input: 2 3 4 5 6
Expected output:
Sum of even numbers: 12
*/
#include<stdio.h>                                 
int main()
{
        int arr[10],ele,sum=0;
        printf("Enter the number of elements\n");
        scanf("%d",&ele);
        printf("Enter the array elements\n");
        for(int i=0;i<ele;i++)
                scanf("%d",&arr[i]);

    for(int i=0;i<ele;i++)
    {
        if(arr[i]%2==0)
        sum = sum + arr[i];
    }
    printf("Sum of Even Numbers: %d\n",sum);
}
