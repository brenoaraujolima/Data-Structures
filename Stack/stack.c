

#include "stack.h"
#include<stdlib.h>
#include<stdio.h>

struct node {
    char *name;
    struct node *next;
};

struct stack {
    Node *top;
};

Stack *createStack(void) {
    Stack *stack = (Stack *) malloc(sizeof(Stack));
    if(stack == NULL) {
        printf("No memory");
        exit(1);
    }
    else {
        stack->top = NULL;
        return stack;
    }
}

Stack *push(Stack *stack,char *name) {
    Node *newTop = (Node *) malloc(sizeof(Node));
    newTop->name = name;
    newTop->next = stack->top;
    stack->top = newTop;
}

Stack *pop(Stack *stack) {
    if(emptyStack(stack)) {
        printf("Empty Stack");
        exit(1);
    }
    else {
        stack->top = stack->top->next;
    }
}
int emptyStack(Stack *stack) {
    return (stack->top == NULL);
}
void freeStack(Stack *stack) {
    free(stack);
    stack = NULL;
}

void runningStack(Stack *stack) {
    Node *node = stack->top;
    while(node != NULL) {
        printf("%s\n", node->name);
        node = node->next;
    }
}