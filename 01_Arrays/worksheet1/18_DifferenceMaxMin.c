/*
Question: Difference between max and min
Question description: Write a C program to find the difference between largest and smallest elements in an array.
Sample data:
Input: 5 1 9 3 6
Expected output:
Difference: 8
 */
#include<stdio.h>                                 
int main()
{
	int arr[10],ele,min,max,i;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&arr[i]);

	min = max = arr[0];  

	for(i = 0; i < ele; i++)
	{
		if(arr[i] < min)
			min = arr[i];
		if(arr[i] > max)
			max = arr[i];
	}

	printf("Difference: %d", max - min);
}
