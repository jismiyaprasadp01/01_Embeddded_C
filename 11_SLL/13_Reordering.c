/*
Reordering by Parity Challenges
Question:
Write a C program to place all even-numbered nodes after odd-numbered nodes.

Sample data:
List: 1 2 3 4 5 6
Expected output:
Reordered list: 1 3 5 2 4 6
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

void reorder_parity()
{
    struct node *oddHead = NULL, *oddTail = NULL;
    struct node *evenHead = NULL, *evenTail = NULL;
    struct node *temp = head;

    while (temp)
    {
        if (temp->data % 2 != 0)
        {
            if (oddHead == NULL)
                oddHead = oddTail = temp;
            else
            {
                oddTail->next = temp;
                oddTail = temp;
            }
        }
        else
        {
            if (evenHead == NULL)
                evenHead = evenTail = temp;
            else
            {
                evenTail->next = temp;
                evenTail = temp;
            }
        }

        temp = temp->next;
    }

    if (oddTail)
        oddTail->next = evenHead;

    if (evenTail)
        evenTail->next = NULL;

    head = oddHead;
}

int main()
{
    insert_end(1);
    insert_end(2);
    insert_end(3);
    insert_end(4);
    insert_end(5);
    insert_end(6);

    printf("Original list:\n");
    display();

    reorder_parity();

    printf("Reordered list:\n");
    display();

    return 0;
}

