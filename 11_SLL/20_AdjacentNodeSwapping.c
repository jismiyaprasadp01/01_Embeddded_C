/*
Adjacent Node Swapping Variants
Question:
Write a C program to swap every two adjacent nodes.

Sample data:
List: 1 2 3 4 5

http://192.168.2.101/link/232#bkmrk-expected-output%3Aswap-1
 
Expected output:
Swapped list: 2 1 4 3 5
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    struct node *temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newnode;
}

void display()
{
    struct node *temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void swap_adjacent()
{
    if (head == NULL || head->next == NULL)
        return;

    struct node *temp = head;
    struct node *prev = NULL;

    head = head->next;   // new head after first swap

    while (temp != NULL && temp->next != NULL)
    {
        struct node *next = temp->next;

        temp->next = next->next;
        next->next = temp;

        if (prev != NULL)
            prev->next = next;

        prev = temp;
        temp = temp->next;
    }
}

int main()
{
    insert_end(1);
    insert_end(2);
    insert_end(3);
    insert_end(4);
    insert_end(5);

    printf("Original list:\n");
    display();

    swap_adjacent();

    printf("Swapped list:\n");
    display();

    return 0;
}

