/*
   Palindrome Check Variants
Question:
Write a C program to check if a singly linked list is a palindrome.

Sample data:
List: 1 2 2 1


Expected output:
Linked list is a palindrome.
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

struct node* reverse(struct node* head)
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

int palindrome()
{
    if (head == NULL || head->next == NULL)
        return 1;

    struct node *slow = head, *fast = head;

    // Find middle
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    struct node *secondHalf = reverse(slow->next);

    struct node *firstHalf = head;
    struct node *temp = secondHalf;

    // Compare halves
    while (temp != NULL) {
        if (firstHalf->data != temp->data)
            return 0;

        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    return 1;
}

int main()
{
    int choice, value;

    while(1)
    {
        printf("\n1.Add\n2.Print\n3.Check Palindrome\n4.Exit\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                add_end(value);
                break;

            case 2:
                print();
                break;

            case 3:
                if(palindrome())
                    printf("Linked list is a palindrome\n");
                else
                    printf("Not a palindrome\n");
                break;

            case 4:
                return 0;
        }
    }
}

