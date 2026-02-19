/*
Calculate the power of a number (x^y) using recursion.
*/
#include<stdio.h>
int power(int num,int pow)
{
if(pow==0)
return 1;
if(pow)
return num*power(num,pow-1);
}
int main()
{
int num=2,pow=5;
printf("Power of the number is %d\n",power(num,pow));
}
