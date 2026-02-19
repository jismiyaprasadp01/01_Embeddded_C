/*
Nth Node from End Variants
Question:
Write a C program to retrieve the nth node from the end.

Sample data:
List: 1 3 5 11
n = 3
 
Expected output:
Result: 3
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* create_node(int value)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

void add_end(int value)
{
    struct node *newnode = create_node(value);

    if (head == NULL) {
        head = newnode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

int length()
{
    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void nth_from_end(int n)
{
    int len = length();

    if (n > len) {
        printf("Invalid position\n");
        return;
    }

    int pos = len - n + 1;

    struct node *temp = head;
    for (int i = 1; i < pos; i++)
        temp = temp->next;

    printf("Result: %d\n", temp->data);
}

int main()
{
    add_end(1);
    add_end(3);
    add_end(5);
    add_end(11);

    int n = 3;

    nth_from_end(n);

    return 0;
}

