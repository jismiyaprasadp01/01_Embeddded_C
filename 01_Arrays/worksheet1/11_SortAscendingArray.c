/*
Question: Sort array in ascending order
Question description: Write a C program to sort elements in ascending order.
Sample data:
Input: 20 5 10 8
Expected output:
Sorted array: 5 8 10 20
 */
#include<stdio.h>   
void sort_array(int *arr,int ele)
{
	int i,j;
	for(i=0;i<ele-1;i++)
	{
		for(j=i;j<ele-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("Array after sorting\n");
	for(i=0;i<ele;i++)
	{
		printf("%d ",arr[i]);
	}
}           
int main()
{
	int arr[10],ele,even,odd;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	sort_array(arr,ele);
}
