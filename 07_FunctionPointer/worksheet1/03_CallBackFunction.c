/*
   Callback Function Array Processing
   Define a function processArray that accepts an integer array, its size, and a callback function as arguments.
   Implement callback functions (increment, doubleValue) that modify array elements in different ways.
 */
#include<stdio.h>
void increment(int *x)
{
	(*x)++;
}
void doublevalue(int *x)
{
	*x=(*x)*2;
}

void ProcessArrray(int arr[],int ele,void(*callback)(int *))
{
	for(int i=0;i<ele;i++)
		callback(&arr[i]);
}
int main()
{
	int arr[]={1,2,3};
	int ele=3;
	ProcessArray(arr,ele,increment);
	for(int i=0;i<ele;i++)
		printf("%d ",arr[i]);
	printf("\n");
	ProcessArray(arr,ele,doublevalue);
	for(int i=0;i<ele;i++)
		printf("%d ",arr[i]);
}
