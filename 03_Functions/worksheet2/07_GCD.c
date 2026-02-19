/*
   Find the greatest common divisor (GCD) using recursion
 */
#include<stdio.h>
int gcd_num(int num,int d)
{
	if(d==1)
		return 1;
	if(num%d==0)
		return d;
	return (num,d-1);
}

int main()
{
	int num=54,d=num/2;
	printf("Greatest common divisor is %d\n",gcd_num(num,d));
}
