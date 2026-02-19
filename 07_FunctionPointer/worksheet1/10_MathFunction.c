/*
Math Function Framework
Write wrapper functions around standard mathematical functions (sin, cos, tan, log) with the same function prototype.
Store pointers to these functions in an array.
Provide an interface for users to select and execute a math function on a given floating-point input.
*/
#include <stdio.h>
#include <math.h>

typedef double (*MathFunc)(double);

double mySin(double x)
{
    return sin(x);
}

double myCos(double x)
{
    return cos(x);
}

double myTan(double x)
{
    return tan(x);
}

double myLog(double x)
{
    return log(x);
}

int main()
{
    MathFunc funcs[4];
    double value;
    int choice;

    funcs[0] = mySin;
    funcs[1] = myCos;
    funcs[2] = myTan;
    funcs[3] = myLog;

    printf("Enter value: ");
    scanf("%lf", &value);

    printf("Select function:\n");
    printf("0.sin  1.cos  2.tan  3.log : ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 4)
        printf("Result = %lf\n", funcs[choice](value));
    else
        printf("Invalid choice\n");

    return 0;
}

