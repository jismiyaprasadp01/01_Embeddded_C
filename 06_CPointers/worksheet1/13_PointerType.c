/*
Pointer Type Compatibility
Goal: Understand the importance of matching pointer types.

Activity:

Declare int *ip; and float *fp;
Try assigning fp = ip; and observe compiler warning.
Correct the mismatch using proper types or casting.
*/
#include<stdio.h>

int main()
{
    int a = 10;
    int *ip;
    float *fp;

    ip = &a;
    fp = ip; 

    return 0;
}
/*
#include<stdio.h>

int main()
{
    int a = 10;
    int *ip;
    
    ip = &a;

    printf("%d\n", *ip);

    return 0;
}
*/
