/*
   Mathematical Operations with Function Pointers
   Log Session four simple mathematical functions (add, subtract, multiply, divide) that accept two integer arguments and return an integer.
   Use a single function pointer to dynamically select and execute one of these operations based on user input.
 */
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	int (*fun) (int,int);
	fun=add;
	int n=fun(a,b);
	printf("Sum is %d\n",n);
	fun=sub;
	n=fun(a,b);
	printf("Sub is %d\n",n);
}




