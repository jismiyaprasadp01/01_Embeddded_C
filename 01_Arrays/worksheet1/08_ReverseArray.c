/*
Question: Reverse an array
Question description: Write a C program to reverse an array in-place.
Sample data:
Input: 10 20 30 40 50
Expected output:
Reversed array: 50 40 30 20 10
*/
#include<stdio.h> 
void reverse_array(int *arr,int ele)
{
int i,j,t;
for(i=0,j=ele-1;i<j;i++,j--) 
{
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}                               
int main()
{
        int arr[10],ele,i;
        printf("Enter the number of elements\n");
        scanf("%d",&ele);
        printf("Enter the array elements\n");
        for(i=0;i<ele;i++)
                scanf("%d",&arr[i]);
	reverse_array(arr,ele);
	for(i=0;i<ele;i++)
	printf("%d ",arr[i]);
printf("\n");
}

