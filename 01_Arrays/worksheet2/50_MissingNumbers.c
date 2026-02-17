/*
Find the missing two numbers in an array
http://192.168.2.101/link/225#bkmrk-question-description-24
 
Question description:
Write a C program to find two missing numbers from an array containing numbers from 1 to n+2.
Sample data:
Input: 1 2 4 6
Expected output:
Missing numbers: 3 5
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elemets:\n");
    scanf("%d",&n);
    int a[n];
    int i,j,s;
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if((i+1)!=a[i]){
            printf("The missing element is %d\n",i+1);
            break;
        }
    }
}
