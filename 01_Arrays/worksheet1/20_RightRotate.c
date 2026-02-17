/*
Question: Right rotate array by n
Question description: Write a C program to rotate an array to the right by n positions.
Sample data:
Array: 1 2 3 4 5
Rotate by: 2
Expected output:
Rotated array: 4 5 1 2 3i
*/
#include<stdio.h>
void right_rotate(int *arr,int ele,int n)
{
for(int k = 0; k < n; k++)
    {
        int temp = arr[ele-1];

        for(int i = ele-1;i>=0; i--)
            arr[i] = arr[i-1];

        arr[0] = temp;
    }

    printf("Array after rotation:\n");
    for(int i = 0; i < ele; i++)
        printf("%d ", arr[i]);



}
int main()
{
        int arr[10],ele,n;
        printf("Enter the number of elements\n");
        scanf("%d",&ele);
        printf("Enter the array elements\n");
        for(int i=0;i<ele;i++)
                scanf("%d",&arr[i]);
        printf("how many number of times array has to be rotated\n");
scanf("%d",&n);
right_rotate(arr,ele,n);
}
