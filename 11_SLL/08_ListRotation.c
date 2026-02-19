/*
List Rotation Challenges
Question:
Write a C program to rotate a linked list to the right by k places.

Sample data:
List: 1 3 4 7 9
k = 2

http://192.168.2.101/link/232#bkmrk-expected-output%3Arota
 
Expected output:
Rotated list: 4 7 9 1 3
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

void print()
{
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void rotate(int k)
{
    if (head == NULL || k == 0)
        return;

    struct node *temp = head;
    int count = 1;

    // move to kth node
    while (count < k && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL)
        return;

    struct node *kthNode = temp;
    struct node *newHead = temp->next;

    // go to last node
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = head;   // connect end to start
    kthNode->next = NULL;
    head = newHead;
}

int main()
{
    add_end(1);
    add_end(3);
    add_end(4);
    add_end(7);
    add_end(9);

    int k = 2;

    rotate(k);

    printf("Rotated list: ");
    print();

    return 0;
}

