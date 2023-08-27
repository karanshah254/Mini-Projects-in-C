#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// function to print all the elements of linked list
void display(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d\n", n->data);

        n = n->next;
    }
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;


    // memory allocations
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // assigning value to nodes
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // liking nodes 
    head->next = second;
    second->next = third;
    third->next = NULL;

    // calling display 
    display(head); // prints  10 20 30

    return 0;
}
