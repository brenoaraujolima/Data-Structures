#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct node Node;
typedef struct stack Stack;

/*createStack Function
Alloc and initialize a stack and returns itself.*/
Stack *createStack(void);

/*push Function
Add an element into a stack and returns the updated stack.*/
Stack *push(Stack *stack,char *name);

/*pop Function
Removes an element from the stack. Returns the updated stack.*/
Stack *pop(Stack *stack);

/*emptyStack Function
Check if a stack is empty. Returns 1 if yes and 0,otherwise.*/
int emptyStack(Stack *stack);

/*freeStack Function
Liberates the block memory occupied by a stack.*/
void freeStack(Stack *stack);

/*runningStack Function
Prints all the elements into a stack.*/
void runningStack(Stack *stack);

#endif