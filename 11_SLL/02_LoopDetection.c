/*
Loop Detection Challenges
Question:
Write a C program to detect and remove a loop in a singly linked list.

Sample data:
List: 1 → 2 → 3 → 4 → 5 → (loop to 2)

Expected output:
Loop detected and removed.
List after removal: 1 2 3 4 5

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

void detect_remove_loop()
{
    struct node *slow = head, *fast = head;

    // Step 1: Detect loop
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            printf("Loop detected and removed.\n");

            // Step 2: Find start of loop
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            // Step 3: Remove loop
            struct node *temp = slow;
            while (temp->next != slow)
                temp = temp->next;

            temp->next = NULL;
            return;
        }
    }

    printf("No loop found.\n");
}

// helper to create loop for testing
void create_loop()
{
    if (head == NULL) return;

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = head->next; // loop to second node
}

int main()
{
    int choice, value;

    while(1)
    {
        printf("\n1.Add\n2.Print\n3.Create Loop\n4.Detect & Remove Loop\n5.Exit\n");
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
                create_loop();
                printf("Loop created (last node → second node)\n");
                break;

            case 4:
                detect_remove_loop();
                break;

            case 5:
                return 0;
        }
    }
}


