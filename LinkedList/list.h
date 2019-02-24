#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct list List;

/*allocList Function
Alloc dinamically a list and returns a pointer to itself.*/
List *allocList();

/*startList Function
Initialize the list*/
List *startList(List *list);

/*addList Function
Alloc a list, sets its name and returns its node.*/
List *addList(List *list, char *name);

/*searchList Function
Runs a list looking for a given name. Returns its node or NULL if node doesn't exist.*/
List *searchList(List *list, char *name);

/*Remove a node with given name from list.*/
List *removeList(List *list, char *name);

/*emptyList Function
Checks if list is empty. Return 1, if yes and 0,otherwise.*/
int emptyList(List *list);

/*Liberate the block memory occupied by a list.*/
void freeList(List *list);

/*getName Function
Returns a string with the node's name.*/
char *getName(List *list);

/*runningList Function
Prints all the names cointaining on the linked list.*/
void runningList(List *list);

#endif