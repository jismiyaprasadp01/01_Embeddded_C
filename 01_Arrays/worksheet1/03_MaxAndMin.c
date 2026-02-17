/*
Question: Find maximum and minimum element
Question description: Write a C program to find the largest and smallest element in the array.
Sample data:
Input: 8 3 15 6 2
Expected output:
Maximum = 15
Minimum = 2
 */
#include<stdio.h>
int max_min(int *arr,int ele,int *min,int *max)
{
*min=arr[0];
*max=arr[0];
	for(int i=1;i<ele;i++)
	{
		if(arr[i]>*max)
			*max=arr[i];
		if(arr[i]<*min)
			*min=arr[i];
	}
}
	int main()
	{
		int arr[10],ele,min,max;
		printf("Enter the number of elements\n");
		scanf("%d",&ele);
		printf("Enter the array elements\n");
		for(int i=0;i<ele;i++)
			scanf("%d",&arr[i]);
		max_min(arr,ele,&min,&max);
		printf("Min element in array is %d\n",min);
		printf("Max element in array is %d\n",max);
	}
