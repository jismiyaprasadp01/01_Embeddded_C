/*
   Get highest set bit of a number
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--6

Question: Write a C program to find the position of the highest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Highest set bit of 18 is at position 4 (zero-based)
 */
#include<stdio.h>
int highest_set_bit(int num)
{
	for(int pos=31;pos>=0;pos--)
	{
		if(num>>pos&1)
			return pos;
	}
}
int main()
{
	int num=18;
	int pos=highest_set_bit(num);
	printf("Highest set bit position is %d\n",pos);
}
