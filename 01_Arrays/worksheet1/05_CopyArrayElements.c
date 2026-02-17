/*
Question: Copy array elements
Question description: Write a C program to copy all elements from one array to another.
Sample data:
Input: 1 2 3 4 5
Expected output:
Copied array: 1 2 3 4 5
*/
#include<stdio.h>                                 
int main()
{
        int arr[10],brr[10],ele;
        printf("Enter the number of elements\n");
        scanf("%d",&ele);
        printf("Enter the array elements\n");
        for(int i=0;i<ele;i++)
                scanf("%d",&arr[i]);
	for(int i=0;i<ele;i++)
{
brr[i]=arr[i];
printf("%d ",brr[i]);
}
}
