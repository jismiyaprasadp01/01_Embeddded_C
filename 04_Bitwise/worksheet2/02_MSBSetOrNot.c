/*
Check Most Significant Bit (MSB) of a number is set or not
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--1
 
Question: Write a C program to check if the Most Significant Bit (MSB) of a number is set (1) or not.
Sample data: Input: 128 (binary 10000000 for 8-bit number)
Expected output: MSB of 128 is set (1)
*/
#include<stdio.h>
int main()
{
int num=128,bits=8;
if(num&(1<<(bits-1)))
printf("MSB is set\n");
else
printf("MSB is not set\n");
}
