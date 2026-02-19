/*
Alternate Interleaving Challenges
Question:
Write a C program to interleave two lists alternatively.

Sample data:
List1: 1 3 5
List2: 2 4 6

http://192.168.2.101/link/232#bkmrk-expected-output%3Aresu-2
 
Expected output:
Result: 1 2 3 4 5 6
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

struct node* interleave(struct node *l1, struct node *l2)
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

    list1 = insert_end(list1, 1);
    list1 = insert_end(list1, 3);
    list1 = insert_end(list1, 5);

    list2 = insert_end(list2, 2);
    list2 = insert_end(list2, 4);
    list2 = insert_end(list2, 6);

    list1 = interleave(list1, list2);

    printf("Result: ");
    display(list1);

    return 0;
}

