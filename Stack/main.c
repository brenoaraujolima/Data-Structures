#include "stack.h"
#include<stdio.h>

void main() {
    
    Stack *stack = createStack();
    stack = push(stack, "Carol");
    stack = push(stack, "Mariana");
    stack = push(stack, "Natália");
    stack = push(stack, "Larissa");

    //runningStack(stack);

    stack = pop(stack);

    printf("\n\n");  
    runningStack(stack);
}