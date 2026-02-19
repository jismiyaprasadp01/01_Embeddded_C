/*
Question 5: Traverse Array with Pointer Arithmetic
Task: Using only a pointer (no array indexing), print all elements of the array.

Sample data:
int arr[] = {100, 200, 300, 400};
Expected output:

100 200 300 400
*/
#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4};
    int* p=a;
    for(int i=0;i<4;i++)
    {
        printf("%d ",*p);
        p++;
    }
}
