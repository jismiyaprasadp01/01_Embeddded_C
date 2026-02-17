/*
Question: Find for an element
Question description: Write a C program to search for a number in an array and print its index.
Sample data:
Array: 10 20 30 40 50
Find: 30
Expected output:
Element found at index: 2
*/
#include<stdio.h>  
int find_number(int *arr,int ele,int num) 
{
for(int i=0;i<ele;i++)
{
if(arr[i]==num)
return i;
}
}
                              
int main()
{
        int arr[10],ele,num;
        printf("Enter the number of elements\n");
        scanf("%d",&ele);
        printf("Enter the array elements\n");
        for(int i=0;i<ele;i++)
                scanf("%d",&arr[i]);
printf("Enter the number to find\n");
scanf("%d",&num);
int index=find_number(arr,ele,num);
printf("Element found at index :%d\n",index);
printf("\n");
}
