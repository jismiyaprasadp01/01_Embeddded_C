/*
   Copy with Random Pointers Challenges
Question:
Write a C program to create a deep copy of a singly linked list where each node has a random pointer.

Sample data:
List: 1 2 3 5 7
Random pointers: 1→3, 2→5, 3→7, 5→1, 7→3
Expected output:
New list with same data and random pointers correctly mapped.
 */
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *random;
};

struct node *head=NULL;

/* create node */
struct node *createnode(int value)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->random=NULL;
    return newnode;
}

/* add at end */
void add_end(int value)
{
    struct node *newnode=createnode(value);

    if(head==NULL)
    {
        head=newnode;
        return;
    }

    struct node *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newnode;
}

/* print list */
void print()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;   // FIXED
    }
    printf("\n");
}

/* find node by value */
struct node* find(struct node *start,int value)
{
    while(start!=NULL)
    {
        if(start->data==value)
            return start;
        start=start->next;
    }
    return NULL;
}

/* assign random pointer */
void set_random(int src,int dest)
{
    struct node *s=find(head,src);
    struct node *d=find(head,dest);

    if(s!=NULL)
        s->random=d;
}

/* copy list (data + next) */
struct node* copy_list()
{
    struct node *temp=head;
    struct node *newHead=NULL,*tail=NULL;

    while(temp!=NULL)
    {
        struct node *newnode=createnode(temp->data);

        if(newHead==NULL)
        {
            newHead=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }

        temp=temp->next;
    }

    return newHead;
}

/* copy random pointers */
void copy_random(struct node *newHead)
{
    struct node *orig=head;
    struct node *copy=newHead;

    while(orig!=NULL)
    {
        if(orig->random!=NULL)
            copy->random=find(newHead,orig->random->data);

        orig=orig->next;
        copy=copy->next;
    }
}

/* print with random pointer */
void print_random(struct node *start)
{
    while(start!=NULL)
    {
        printf("Data:%d ",start->data);

        if(start->random!=NULL)
            printf("Random:%d\n",start->random->data);
        else
            printf("Random:NULL\n");

        start=start->next;
    }
}

int main()
{
    int value,choice;

    while(1)
    {
        printf("\n1.Add\n2.Print\n3.Set Random\n4.Deep Copy\n5.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d",&value);
                add_end(value);
                break;

            case 2:
                print();
                break;

            case 3:
            {
                int src,dest;
                printf("Enter source and destination values: ");
                scanf("%d%d",&src,&dest);
                set_random(src,dest);
                break;
            }

            case 4:
            {
                struct node *newHead=copy_list();
                copy_random(newHead);

                printf("\nNew list with random pointers:\n");
                print_random(newHead);
                break;
            }

            case 5:
                return 0;
        }
    }
}

