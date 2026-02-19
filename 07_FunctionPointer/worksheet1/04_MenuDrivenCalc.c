/*
   Menu-driven Calculator Using Function Pointers
   Implement mathematical operations (power, modulo, squareRoot) as separate functions.
   Store these operation functions in a function pointer array.
   Provide a user-interactive menu to select and execute the chosen operation on input values.
 */
#include<stdio.h>
int power(int a, int b)
{
	int result = 1;
	for(int i = 0; i < b; i++)
		result *= a;
	return result;
}

int modulo(int a, int b)
{
	return a % b;
}

int squareRoot(int a, int b)
{
	return (int)sqrt(a);
}

int main()
{
	int (*fp[3])(int,int)={power,modulo,sqaureRoot};
	int choice,x,y;
	printf("1)power\n 2)Modulo\n 3)squareRoot\n");
	scanf("%d",&choice);
	if(choice==3)
	{
		printf("Enter the number\n");
		scanf("%d",&x);
		printf("Result=%d\n",fp[2](x,0));
	}
	else
	{
		printf("Enter two numbers\n");
		scanf("%d %d ",&x,&y);
		printf("Result is %d\n",fp[choice-1](x,y));
	}
}

