/*
Check whether a number is even or odd using bitwise operator
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--15
 
Question: Write a C program to check whether a number is even or odd using bitwise AND operator.
Sample data: Input: 7
Expected output: 7 is odd
*/
#include<stdio.h>
int main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
if(num&1)
printf("number is odd\n");
else
printf("Number is even \n");
}
