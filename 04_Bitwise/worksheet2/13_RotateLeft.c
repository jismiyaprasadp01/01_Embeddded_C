/*
Rotate bits of a given number
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--12
 
Question: Write a C program to rotate bits of a number to the left or right by a given number of positions.
Sample data: Input: number=16 (binary 00010000), rotate left by 2
Expected output: Result after rotation: 64 (binary 01000000)
*/
#include<stdio.h>
int main()
{
int num=16;
num=num<<2;
for(int pos=7;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");
}
