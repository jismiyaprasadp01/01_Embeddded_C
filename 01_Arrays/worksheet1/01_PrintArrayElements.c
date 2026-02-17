/*
Question: Print elements of an array
Question description: Write a C program to read n elements into an array and display them.
Sample data:
Enter the number of elements: 5
Enter the elements: 10 20 30 40 50
Expected output:
Elements in array are: 10 20 30 40 50
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
for(int i=0;i<ele;i++)
printf("%d ",arr[i]);
printf("\n");
}
 
