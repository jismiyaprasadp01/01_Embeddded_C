/*
Intersection Finder Variants
Question:
Write a C program to find the intersection point of two singly linked lists.

Sample data:
List A: 1 2 → 3 4
List B: 5 → 3 4

http://192.168.2.101/link/232#bkmrk-expected-output%3Ainte
 
Expected output:
Intersection found at node with data: 3
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;

struct node* create_node(int value)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

void add_end1(int value)
{
    struct node *newnode = create_node(value);

    if (head1 == NULL) {
        head1 = newnode;
        return;
    }

    struct node *temp = head1;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void add_end2(int value)
{
    struct node *newnode = create_node(value);

    if (head2 == NULL) {
        head2 = newnode;
        return;
    }

    struct node *temp = head2;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

int length(struct node *head)
{
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

struct node* find_intersection(struct node *a, struct node *b)
{
    int la = length(a);
    int lb = length(b);

    int diff = abs(la - lb);

    struct node *longl = (la > lb) ? a : b;
    struct node *shortl = (la > lb) ? b : a;

    for (int i = 0; i < diff; i++)
        longl = longl->next;

    while (longl != NULL && shortl != NULL) {
        if (longl == shortl)
            return longl;

        longl = longl->next;
        shortl = shortl->next;
    }

    return NULL;
}

int main()
{
    /* List A: 1 2 3 4 */
    add_end1(1);
    add_end1(2);
    add_end1(3);
    add_end1(4);

    /* List B: 5 */
    add_end2(5);

    /* Create intersection at node 3 */
    struct node *temp = head1;
    while (temp != NULL) {
        if (temp->data == 3)
            break;
        temp = temp->next;
    }

    head2->next = temp;

    struct node *result = find_intersection(head1, head2);

    if (result != NULL)
        printf("Intersection found at node with data: %d\n", result->data);
    else
        printf("No intersection found\n");

    return 0;
}

