#ifndef VEREM_SZTA_FUNCTION_STACK_H
#define VEREM_SZTA_FUNCTION_STACK_H

typedef struct
{
    int maxsize;// a verem maximális kapacitása
    int sp;
    int *items;
} STACK;

STACK *create (int capacity);
int isEmpty(STACK *myStack);
int isFull(STACK *myStack);
void push (STACK *myStack, int a);
int pop (STACK *myStack);
int top (STACK *myStack);


#endif //VEREM_SZTA_FUNCTION_STACK_H