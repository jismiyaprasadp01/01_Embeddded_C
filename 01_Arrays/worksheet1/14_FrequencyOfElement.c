/*
Question: Frequency of each element
Question description: Write a C program to count the frequency of each element in an array.
Sample data:
Input: 1 2 2 3 3 3
Expected output:
1 occurs 1 time
2 occurs 2 times
3 occurs 3 times
 */
#include <stdio.h>
int element_frequency(int *arr,int ele)
{
	for(int i=0;i<ele;i++)
	{
		int count=1;
		for(int j=i+1;j<ele;j++)
		{
			if(arr[i]==arr[j])
				count++;
		}
		if(count>1)
			printf("%d repeates %d times\n",arr[i],count);
	}
}                
int main()
{
	int arr[10],ele,count;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	element_frequency(arr,ele);
}


