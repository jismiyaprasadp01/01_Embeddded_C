/*
Question 2: Pointer Addition
Task: Using the same array, print the last element by adding an integer to the pointer.

Sample data:
int arr[] = {5, 10, 15, 20, 25};
Expected output:

Last element is 25
*/
#include<stdio.h>
int main()
{
    int a[]={5,10,15,20,25};
    int* p=a;
    printf("%d",*(p+4));
}
