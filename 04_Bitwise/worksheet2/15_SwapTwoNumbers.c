/*
Swap two numbers using bitwise operator
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--14
 
Question: Write a C program to swap two numbers using bitwise XOR operator without using a temporary variable.
Sample data: Input: a=5, b=9
Expected output: After swapping: a=9, b=5
*/
#include<stdio.h>
void swap(int *a,int *b)
{
*a=*a^*b;
*b=*a^*b;
*a=*a^*b;
}
int main()
{
int a=2,b=3;
swap(&a,&b);
printf("a=%d\n and b=%d\n",a,b);
}
