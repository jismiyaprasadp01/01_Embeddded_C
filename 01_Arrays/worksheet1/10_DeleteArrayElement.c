/*
Question: Delete element at position
Question description: Write a C program to delete a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Delete at position: 2
Expected output:
Array after deletion: 10 20 40
 */
#include<stdio.h> 
int delete_element(int *arr,int ele,int pos)
{
	for(int i=pos;i<ele;i++)
		arr[i]=arr[i+1];
	ele--;
	return ele;
}

int main()
{
	int arr[10],ele,pos;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	printf("Enter the position the element to be deleted\n");
	scanf("%d",&pos);
	int del=delete_element(arr,ele,pos);
	for(int i=0;i<del;i++)
		printf("%d ",arr[i]);
}

