/*
Alternate K-Node Reversal Challenges
Question:
Write a C program to reverse alternate k nodes.

Sample data:
List: 1 2 3 4 5 6 7 8
k = 2

http://192.168.2.101/link/232#bkmrk-expected-output%3Areve-2
 
Expected output:
Reversed: 2 1 3 4 6 5 7 8
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

    head = reverse(head, 2);

    printf("Reversed:\n");
    display();

    return 0;
}
