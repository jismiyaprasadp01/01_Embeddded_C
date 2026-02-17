/*
Question: Find duplicate elements
Question description: Write a C program to find all duplicate elements in an array.
Sample data:
Input: 1 2 3 2 4 1
Expected output:
Duplicate elements: 1 2
 */
#include<stdio.h>      
void dup_elements(int *arr, int ele)
{
    for(int i = 0; i < ele; i++)
    {
        int count = 0;

        for(int j = i + 1; j < ele; j++)
        {
            if(arr[i] == arr[j])
            {
                count = 1;
                break;
            }
        }

     //   for(int k = 0; k < i; k++)
       // {
         //   if(arr[i] == arr[k])
         //       count = 0;
        //}

        if(count)
            printf("%d ", arr[i]);
    }
}
int main()
{
	int arr[10],ele;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	dup_elements(arr,ele);
}
