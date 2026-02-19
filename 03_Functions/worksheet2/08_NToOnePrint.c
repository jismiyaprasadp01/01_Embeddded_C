/*
   Print numbers from N to 1 using recursion.
 */
#include<stdio.h>
void n_to_one(int n)
{
	if(n==0)
		return;
	if(n)
	printf("%d ",n);
		n_to_one(n-1);
}

int main()
{
	int num;
	printf("Enter the last number\n");
	scanf("%d",&num);
	n_to_one(num);
}
