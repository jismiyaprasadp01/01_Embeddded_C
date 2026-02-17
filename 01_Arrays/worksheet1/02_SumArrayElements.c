/*Question: Sum of all elements in array
  Question description: Write a C program to find the sum of all array elements entered by the user.
  Sample data:
Input: 1 2 3 4 5
Expected output:
Sum = 1
 */
#include<stdio.h>
int sumofarray(int *arr,int ele)
{
	int sum=0,i;
	for(i=0;i<ele;i++)
		sum=sum+arr[i];
return sum;
}
int main()
{
	int arr[10],ele;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	int r=sumofarray(arr,ele);
	printf("Sum of array elements is %d\n",r);
}

