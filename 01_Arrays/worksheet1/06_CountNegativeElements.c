/*
Question: Count negative elements
Question description: Write a C program to count total number of negative elements in an array.
Sample data:
Input: -1 3 -4 5 0 -7
Expected output:
Total negative elements: 3
 */
#include<stdio.h>
int count_negative(int *arr,int ele)
{
	int neg=0;
	for(int i=0;i<ele;i++)
	{
		if(arr[i]<0)
			neg++;
	}
	return neg;
}
int main()
{
	int arr[10],ele,min,max;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	int neg=count_negative(arr,ele);
	printf("Total Negative Elements:%d\n",neg);
}

