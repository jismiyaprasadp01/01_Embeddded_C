/*
Linked List Addition Variants
Question:
Write a C program to add two numbers represented by linked lists.

Sample data:
List 1: 8 7 9 2
List 2: 2 1 2 3

http://192.168.2.101/link/232#bkmrk-expected-output%3Aresu
 
Expected output:
Result: 0 9 1 6 (carry handled)
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *result = NULL;

struct node* create_node(int value)
{
    struct node *n = malloc(sizeof(struct node));
    n->data = value;
    n->next = NULL;
    return n;
}

void add_end(struct node **head, int value)
{
    struct node *n = create_node(value);

    if (*head == NULL) {
        *head = n;
        return;
    }

    struct node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = n;
}

struct node* reverse(struct node *head)
{
    struct node *prev = NULL, *next = NULL;

    while (head != NULL) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }

    return prev;
}

void add_lists()
{
    struct node *a = reverse(head1);
    struct node *b = reverse(head2);

    int carry = 0;

    while (a != NULL || b != NULL || carry) {
        int sum = carry;

        if (a != NULL) {
            sum += a->data;
            a = a->next;
        }

        if (b != NULL) {
            sum += b->data;
            b = b->next;
        }

        add_end(&result, sum % 10);
        carry = sum / 10;
    }
}

void print(struct node *head)
{
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    /* List1: 8 7 9 2 */
    add_end(&head1, 8);
    add_end(&head1, 7);
    add_end(&head1, 9);
    add_end(&head1, 2);

    /* List2: 2 1 2 3 */
    add_end(&head2, 2);
    add_end(&head2, 1);
    add_end(&head2, 2);
    add_end(&head2, 3);

    add_lists();

    printf("Result: ");
    print(result);

    return 0;
}

