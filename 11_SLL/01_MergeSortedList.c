/*
Merge Sorted Lists Challenges
 
Question:
Write a C program to merge two sorted singly linked lists into a single sorted linked list.

Sample data:
List 1: 1 3 5 7
List 2: 2 4 6

Expected output:
Merged list: 1 2 3 4 5 6 7
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

/* Add to list1 */
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

/* Add to list2 */
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

void print(struct node *head)
{
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

/* Merge two sorted lists */
struct node* merge_lists(struct node *l1, struct node *l2)
{
    struct node dummy;
    struct node *tail = &dummy;
    dummy.next = NULL;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1 != NULL)
        tail->next = l1;
    else
        tail->next = l2;

    return dummy.next;
}

int main()
{
    /* List 1: 1 3 5 7 */
    add_end1(1);
    add_end1(3);
    add_end1(5);
    add_end1(7);

    /* List 2: 2 4 6 */
    add_end2(2);
    add_end2(4);
    add_end2(6);

    struct node *merged = merge_lists(head1, head2);

    printf("Merged list: ");
    print(merged);

    return 0;
}

