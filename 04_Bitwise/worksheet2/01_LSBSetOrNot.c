/*
   Check Least Significant Bit (LSB) of a number is set or not
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c-

Question: Write a C program to check if the Least Significant Bit (LSB) of a number is set (1) or not.
Sample data: Input: 5 (binary 0101)
Expected output: LSB of 5 is set (1)
 */
#include<stdio.h>
int main()
{
	int num=5;
	if(num&1==1)
		printf("LSB is set\n");
	else
		printf("LSB is not set \n");
}
