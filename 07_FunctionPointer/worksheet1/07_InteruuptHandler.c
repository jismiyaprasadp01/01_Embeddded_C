/*
Interrupt Handler Simulation
Log Session several interrupt handler functions (e.g., timerInterrupt, keyboardInterrupt, errorInterrupt).
Map these interrupt handlers using an array of function pointers.
Simulate interrupts by invoking appropriate interrupt handlers using their pointers based on interrupt numbers entered by the user.
*/
#include <stdio.h>

typedef void (*InterruptHandler)();

void timerInterrupt()
{
    printf("Timer Interrupt Handled\n");
}

void keyboardInterrupt()
{
    printf("Keyboard Interrupt Handled\n");
}

void errorInterrupt()
{
    printf("Error Interrupt Handled\n");
}

enum Interrupts
{
    TIMER_INT,
    KEYBOARD_INT,
    ERROR_INT,
    TOTAL_INTERRUPTS
};

int main()
{
    int irq;

    InterruptHandler handlers[TOTAL_INTERRUPTS];

    handlers[TIMER_INT] = timerInterrupt;
    handlers[KEYBOARD_INT] = keyboardInterrupt;
    handlers[ERROR_INT] = errorInterrupt;

    printf("Enter interrupt number:\n");
    printf("0.Timer  1.Keyboard  2.Error : ");
    scanf("%d", &irq);

    if (irq >= 0 && irq < TOTAL_INTERRUPTS)
        handlers[irq]();
    else
        printf("Invalid interrupt\n");

    return 0;
}

