// Follows LIFO (Last In First Out)
// Only top element is accessed .
/*

Has push,pop,peek,etc fucntions to do operations .

*/

/*

Post fix evaluation 

2 3 1 * + 9 -
2 3 + 9 -
5 9 -
-4 -- answer 

*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack
{
    int top;
    unsigned size;
    int *arr;
};

struct Stack *create(unsigned size)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->size = size;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->size * sizeof(int));

    return stack;
};

int isFull(struct Stack *stack)
{
    return stack->top = stack->size - 1;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack,int item)
{
    if(isFull(stack))
    {
        return ;
        stack->arr[++stack ->top] = item ;
    }
}

int pop(struct Stack *stack)
{
    if(isEmpty(stack))
    {
        return-1;
        return stack ->arr[stack->top--];
    }
}

int peek(struct Stack *stack)
{
    if(isEmpty(stack))
    {
        return INT_MIN;
        return stack->arr[stack->top] ;
    }
}

int main()
{
    struct Stack *stack = create(100);

    push(stack,10);
    push(stack,20);
    push(stack,20);

    printf("\n%d popped" , pop(stack));
    printf("\n%d popped",pop(stack));

    (isEmpty(stack)==-1)?printf("\nempty"):printf("\nNot Empty");
}
