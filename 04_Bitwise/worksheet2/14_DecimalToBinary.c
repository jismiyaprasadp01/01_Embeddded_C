/*
Convert decimal to binary using bitwise operator
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--13
 
Question: Write a C program to convert a decimal number to binary representation using bitwise operators.
Sample data: Input: 13
Expected output: Binary representation: 1101
*/
#include<stdio.h>
int main()
{
int num=13;
for(int pos=7;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");
}

