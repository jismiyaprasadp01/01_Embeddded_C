/*
Question: Count even and odd elements
Question description: Write a C program to count how many even and odd numbers are in the array.
Sample data:
Input: 4 7 9 10 22
Expected output:
Even: 3
Odd: 2
 */
#include<stdio.h>
void Even_Odd(int *arr,int ele,int *even,int *odd)
{
*even=0;
*odd=0;
	for(int i=0;i<ele;i++)
	{
		if(arr[i]%2==0)
			(*even)++;
		else
			(*odd)++;
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
	Even_Odd(arr,ele,&even,&odd);
	printf("Even :%d\n",even);
	printf("Odd :%d\n",odd);
}
