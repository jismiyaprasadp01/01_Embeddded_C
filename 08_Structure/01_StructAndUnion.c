/*
   Structure vs Union in Embedded Systems
   Goal
   Understand how structures and unions differ in terms of memory layout, access, and use in embedded systems, particularly in data interpretation and memory saving.

   Activity
   Define a structure and a union with three different data types (e.g., char, int, float).
   Print the size of each and compare.
   Write values to each member and observe the behavior.
   Map the union onto a byte buffer and visualize how different types share memory.
   Document a scenario where only one data type is valid at a time (e.g., packet command structure).
http://192.168.2.101/link/150#bkmrk-tip%3A-use-sizeof%28%29-an

Tip: Use sizeof() and printf() to track memory usage and value overlap.
 */
#include<stdio.h>
struct data
{
	int a;
	char b;
	float c;
};
union date
{
	int a;
	char b;
	float c;
};
int main()
{
	struct data v;
	union date h;
	printf("%ld\n",sizeof(v));
	printf("%ld\n",sizeof(h));
h.a = 10;
    printf("Union int: %d\n", h.a);

    h.c = 3.14;
    printf("Union float: %f\n", h.c);

    printf("Union int after float write: %d\n", h.a);

}

