/*
Block Reversal Variants
Question:
Write a C program to reverse nodes in blocks of size k.

Sample data:
List: 1 2 3 4 5 6
k = 3
Expected output:
Reversed: 3 2 1 6 5 4
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
struct node *reverse(struct node *head,int k)
{
int count=0;
struct node *prev=NULL;
struct node *curr=head;
struct node *next=NULL;
while(curr!=NULL && count<k)
{
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
count++;
}
if(next!=NULL)
head->next=reverse(next,k);
return prev;
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

    head = reverse(head, 3);

    printf("Reversed:\n");
    display();

    return 0;
}
