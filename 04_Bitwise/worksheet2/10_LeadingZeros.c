/*
Count leading zeros in a binary number
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--9
 
Question: Write a C program to count the number of leading zeros in the binary representation of a number (assuming 32-bit integer).
Sample data: Input: 16 (binary 00000000000000000000000000010000)
Expected output: Number of leading zeros: 27
*/
#include<stdio.h>
void leading_zero(int n)
{
    int pos,c=0;
    for(pos=31;pos>=0;pos--)
    {
        if((n>>pos)&1)
            break;
        c++;
    }
    printf("The number of trailing zeroes is %d\n",c);
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    leading_zero(n);
}
