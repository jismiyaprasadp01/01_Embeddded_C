/*
 Kth Node Swapping Variants
Question:
Write a C program to swap Kth node from beginning and end.

Sample data:
List: 1 2 3 4 5
k = 2
http://192.168.2.101/link/232#bkmrk-expected-output%3Aswap
 
Expected output:
Swapped list: 1 4 3 2 5
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

void swap_k(int k)
{
    int n = length();

    if (k > n)
        return;

    struct node *a = head;
    struct node *b = head;

    for (int i = 1; i < k; i++)
        a = a->next;
    for (int i = 1; i < n - k + 1; i++)
        b = b->next;
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

int main()
{
    add_end(1);
    add_end(2);
    add_end(3);
    add_end(4);
    add_end(5);

    int k = 2;

    swap_k(k);

    printf("Swapped list: ");
    print();

    return 0;
}

