/*
Get lowest set bit of a number
Question: Write a C program to find the position of the lowest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Lowest set bit of 18 is at position 1 (zero-based)
*/
#include<stdio.h>
int lowest_set_bit(int num)
{
        for(int pos=1;pos<=31;pos++)
        {
                if(num>>pos&1)
                        return pos;
        }
}
int main()
{
        int num=18;
        int pos=lowest_set_bit(num);
        printf("lowest set bit position is %d\n",pos);
}
