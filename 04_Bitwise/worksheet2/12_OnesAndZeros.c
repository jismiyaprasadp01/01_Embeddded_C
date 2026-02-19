/*
Count total zeros and ones in a binary number
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--11
 
Question: Write a C program to count the total number of zeros and ones in the binary representation of a number.
Sample data: Input: 15 (binary 00001111)
Expected output: Number of ones: 4, Number of zeros: 4 (assuming 8-bit)
*/
#include<stdio.h>
void zeros_ones(int num)
{
int pos,ones=0,zeros=0;
for(pos=7;pos>=0;pos--)
{
if(num>>pos&1)
ones++;
else
zeros++;
}
printf("number of zeros is %d\n and ones is %d\n",zeros,ones);

}
int main()
{
int num=15;
zeros_ones(num);
}
