/*
   Find the sum of digits of a number using recursion.
 */
#include<stdio.h>
int sum_digits(int num)
{
	int r,sum=0;
	if(num==0)
		return 0;

	r=num%10;
	sum=r+sum_digits(num/10);
	return sum;
}
int main()
{
	int num=1234;
	printf("Sum of digits is %d\n",sum_digits(num));
}
