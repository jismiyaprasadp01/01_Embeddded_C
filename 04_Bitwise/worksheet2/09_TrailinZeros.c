/*
Count trailing zeros in a binary number
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--8
 
Question: Write a C program to count the number of trailing zeros in the binary representation of a number.
Sample data: Input: 40 (binary 101000)
Expected output: Number of trailing zeros: 3
*/
#include<stdio.h>
void trailing_zero(int n)
{
    int pos,c=0;
    for(pos=0;pos<=31;pos++)
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
    trailing_zero(n);
}
