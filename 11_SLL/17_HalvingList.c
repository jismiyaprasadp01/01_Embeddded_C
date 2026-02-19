/*
Halving the List Challenges
Question:
Write a C program to split a list into two halves.

Sample data:
List: 1 2 3 4 5 6
Expected output:
First half: 1 2 3
Second half: 4 5 6
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

void display(struct node *ptr)
{
    while (ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void split_list(struct node *head,struct node **first,struct node **second)
{
    struct node *slow = head;
    struct node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }

    *first = head;
    *second = slow->next;
    slow->next = NULL;
}

int main()
{
    struct node *first = NULL;
    struct node *second = NULL;

    insert_end(1);
    insert_end(2);
    insert_end(3);
    insert_end(4);
    insert_end(5);
    insert_end(6);

    split_list(head, &first, &second);

    printf("First half: ");
    display(first);

    printf("Second half: ");
    display(second);

    return 0;
}

