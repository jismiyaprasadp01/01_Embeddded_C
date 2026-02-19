/*
Visualizing Memory Addresses
Goal: Visualize how memory is arranged for variables.

Activity:

Declare three local variables.
Print their addresses using printf.
Observe the increasing/decreasing pattern.
*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("%p %p %p\n",&a,&b,&c);
}

