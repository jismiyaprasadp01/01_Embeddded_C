/*
Pointer to Pointer (int **)
Goal: Learn how to use a pointer to another pointer.

Activity:

Declare int a = 5;, int *p = &a;, and int **pp = &p;
Print a, *p, and **pp to understand levels of indirection.
*/
#include<stdio.h>
int main()
{
int a=5;
int *p=&a;
int **pp=&p;
printf("%d %d %d\n",a,*p,**pp);
}

