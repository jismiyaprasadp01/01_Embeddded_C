/*
Flip bits of a binary number using bitwise operator
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--10
 
Question: Write a C program to flip all bits of a number using bitwise operators.
Sample data: Input: 5 (binary 00000101)
Expected output: Flipped bits: 250 (binary 11111010) (assuming 8-bit)
*/
#include<stdio.h>
int main()
{
int num=5,pos;
for(pos=7;pos>=0;pos--)
{
num=num^(1<<pos);
printf("%d",num>>pos&1);
}
}

