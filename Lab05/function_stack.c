#include <stdlib.h>
#include <stdio.h>
#include "function_stack.h"

STACK *create(int capacity) {
    STACK *mystack = (STACK *) malloc(sizeof(STACK *));
    //teszteles
    mystack->maxsize = capacity;
    mystack->sp = -1;
    mystack->items = (int *) malloc(mystack->maxsize * sizeof(int));
    //teszteles
    return mystack;
}

int isEmpty(STACK *myStack) {
    if (myStack->sp == -1) {
        return 1; // ures
    } else {
        return 0;
    }
    //return myStack->sp==-1;
}

int isFull(STACK *myStack) {

    return myStack->sp == myStack->maxsize - 1;
}

void push(STACK *myStack, int a) {
    if (!isFull(myStack)) {
        myStack->sp++;
        myStack->items[myStack->sp] = a;
    } else { printf("A verem tele van."); }
}

int pop(STACK *myStack) {
    int a;
    /*if (!isEmpty(myStack)) {
        a = myStack->items[myStack->sp];
        myStack->sp -= 1;
        return a;
    }
    else return -1;*/
    if(isEmpty(myStack)) {
        return -1;
    }
    a = myStack->items[myStack->sp];
    myStack->sp--;
    return a;
}

int top(STACK *myStack) {
    int a;
    if (!isEmpty(myStack)) {
        a = myStack->items[myStack->sp];
        return a;
    }
}