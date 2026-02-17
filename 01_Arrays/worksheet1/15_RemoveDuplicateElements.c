/*
Question: Remove duplicate elements
Question description: Write a C program to remove duplicate elements from an array.
Sample data:
Input: 2 3 2 4 3 5
Expected output:
Array after removing duplicates: 2 3 4 5
 */
#include<stdio.h>    
int delete_dup(int *arr,int ele)
{
	for(int i=0;i<ele-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			for(int j=i;j<ele-1;j++)
				arr[j]=arr[j+1];
			ele--;
i--;
		}
	}
	return ele;
}                             
int main()
{
	int arr[10],ele,even,odd;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	int del=delete_dup(arr,ele);
	for(int i=0;i<del;i++)
		printf("%d ",arr[i]);
}
