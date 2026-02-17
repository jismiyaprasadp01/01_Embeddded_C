/*
Question: Insert element at position
Question description: Write a C program to insert a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Insert: 25 at position 2
Expected output:
Array after insertion: 10 20 25 30 40
 */
#include<stdio.h>    
void insert_num(int *arr,int ele,int num,int pos) 
{
	for(int i=ele-1;i>=pos;i--)
		arr[i+1]=arr[i];
	arr[pos]=num;
	for(int i=0;i<=ele;i++)
		printf("%d ",arr[i]);
}                            
int main()
{
	int arr[10],ele,num,pos;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	printf("The element and the position to be added\n");
	scanf("%d %d",&num,&pos);
	insert_num(arr,ele,num,pos);
}
