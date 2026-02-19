/*
Event Handling System
Define events such as buttonPressEvent, sensorTriggerEvent.
Implement handler functions for these events.
Log Session an array of function pointers mapping each event to its corresponding handler function.
Simulate event triggers, calling the appropriate handler through function pointers.
*/
#include <stdio.h>

typedef void (*EventHandler)();

void buttonPressEvent()
{
    printf("Button Press Event Handled\n");
}

void sensorTriggerEvent()
{
    printf("Sensor Trigger Event Handled\n");
}

void errorEvent()
{
    printf("Error Event Handled\n");
}

enum Events
{
    BUTTON_EVENT,
    SENSOR_EVENT,
    ERROR_EVENT,
    TOTAL_EVENTS
};

int main()
{
    int event;

    EventHandler handlers[TOTAL_EVENTS];

    handlers[BUTTON_EVENT] = buttonPressEvent;
    handlers[SENSOR_EVENT] = sensorTriggerEvent;
    handlers[ERROR_EVENT] = errorEvent;

    printf("Enter event number:\n");
    printf("0.Button  1.Sensor  2.Error : ");
    scanf("%d", &event);

    if (event >= 0 && event < TOTAL_EVENTS)
        handlers[event]();
    else
        printf("Invalid event\n");

    return 0;
}

