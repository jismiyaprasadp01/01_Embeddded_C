/*
Get nth bit of a number
http://192.168.2.101/link/228#bkmrk-question%3A-write-a-c--2
 
Question: Write a C program to get the value of the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 2
Expected output: Bit 2 of 10 is 1
*/
#include<stdio.h>
int get_nthbit(int num,int pos)
{
return (num>>(pos-1))&1;;
}
int main()
{
int num,pos,n;
printf("Enter the number and bit position\n");
scanf("%d %d",&num,&pos);
n=get_nthbit(num,pos);
printf("Bit %d of %d is %d\n",pos,num,n);
}
