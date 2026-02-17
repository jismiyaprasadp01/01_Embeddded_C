/*
Question: Merge two arrays
Question description: Write a C program to merge two arrays into a third array.
Sample data:
Array 1: 1 2 3
Array 2: 4 5 6
Expected output:
Merged array: 1 2 3 4 5 6
 */
#include<stdio.h>   
int merge_array(int *arr,int *brr,int ele)
{
	int crr[10],j=0;
	for(int i=0;i<ele;i++)
		crr[j++]=arr[i];
	for(int i=0;i<ele;i++)
		crr[j++]=brr[i];
	for(int k=0;k<ele+ele;k++) 
		printf("%d ",crr[k]);
}                                                 
int main()
{
	int arr[10],brr[10],ele,even,odd;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements of first array\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	printf("Enter the array elements of second array\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&brr[i]);
	merge_array(arr,brr,ele);
}
