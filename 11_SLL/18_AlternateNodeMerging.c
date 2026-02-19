/*
Alternate Node Merging Challenges
Question:
Write a C program to merge alternate nodes of two linked lists.

Sample data:
List1: 9 7 5
List2: 10 8 6
Expected output:
Merged list: 9 10 7 8 5 6
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* insert_end(struct node *head, int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
        return newnode;

    struct node *temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newnode;
    return head;
}

void display(struct node *head)
{
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct node* merge_alternate(struct node *l1, struct node *l2)
{
    struct node *head = l1;

    while (l1 != NULL && l2 != NULL)
    {
        struct node *next1 = l1->next;
        struct node *next2 = l2->next;

        l1->next = l2;

        if (next1 == NULL)
            break;

        l2->next = next1;

        l1 = next1;
        l2 = next2;
    }

    return head;
}

int main()
{
    struct node *list1 = NULL;
    struct node *list2 = NULL;

    list1 = insert_end(list1, 9);
    list1 = insert_end(list1, 7);
    list1 = insert_end(list1, 5);

    list2 = insert_end(list2, 10);
    list2 = insert_end(list2, 8);
    list2 = insert_end(list2, 6);

    printf("Merged list:\n");

    list1 = merge_alternate(list1, list2);
    display(list1);

    return 0;
}

