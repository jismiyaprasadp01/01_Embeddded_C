/*
State Machine Implementation
Implement a basic state machine (initState, runState, stopState, errorState) with each state represented by a separate function.
Use function pointers to transition between states based on user input or internal conditions.
Demonstrate state transitions clearly in your program’s output.
*/
#include <stdio.h>

typedef void (*State)();

void initState();
void runState();
void stopState();
void errorState();

State currentState;

void initState()
{
    int ch;
    printf("\nINIT STATE\n");
    printf("1.Run  2.Error : ");
    scanf("%d", &ch);

    if (ch == 1)
        currentState = runState;
    else
        currentState = errorState;
}

void runState()
{
    int ch;
    printf("\nRUN STATE\n");
    printf("1.Stop  2.Error : ");
    scanf("%d", &ch);

    if (ch == 1)
        currentState = stopState;
    else
        currentState = errorState;
}

void stopState()
{
    printf("\nSTOP STATE\n");
    currentState = NULL;
}

void errorState()
{
    printf("\nERROR STATE\n");
    currentState = stopState;
}

int main()
{
    currentState = initState;

    while (currentState != NULL)
        currentState();

    printf("\nState machine ended\n");

    return 0;
}

