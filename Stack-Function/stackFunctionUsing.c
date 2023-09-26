#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};

struct ArrayStack *createStack(int cap)
{
    struct ArrayStack *stack;
    stack = malloc(sizeof(struct ArrayStack));
    stack->capacity = cap;
    stack->top = -1;
    stack->array = malloc(sizeof(int) * stack->capacity);
    return stack;
}

int isFull(struct ArrayStack *stack)
{
    if (stack->top == stack->capacity - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct ArrayStack *stack)
{
    if (stack->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct ArrayStack *stack, int item)
{

    if (!isFull(stack))
    {
        stack->top++;
        stack->array[stack->top] = item;
    }
}

int pop(struct ArrayStack *stack)
{
    int item;
    if (!isEmpty(stack))
    {
        item = stack->array[stack->top];
        stack->top--;
    }
    return -1;
}

int main()
{
    int choice, result;
    struct ArrayStack *stack;

    while (1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Exit the program");
        printf("\nEnter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Number : ");
            scanf("%d", &result);
            push(stack, result);
            break;

        case 2:
            result = pop(stack);
            if (result == -1)
            {
                printf("\nStack is Empty");
            }
            else
            {
                printf("\nPoped value is : %d", result);
            }
            break;

        case 3:
            exit(0);
        }
    }
}
