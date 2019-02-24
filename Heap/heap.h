#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

typedef struct heap Heap;
typedef struct student Student;

/*createHeap function
Function that initializes the Heap with default values.*/
Heap *createHeap(void);

/*insertionHeap Function
Inserts on a heap a student named "name" and priority "prior" and return the updated heap.*/
Heap *insertionHeap(Heap *heap, char *name, int prior);

/*printStudent Function
Prints name and priority of that student.*/
void printStudent(Student *student);

/*searchHeap function
Return a student with priority "prior".If the student doesn't exist, it returns a NULL pointer.*/
Student *searchHeap(Heap *heap, int prior);

/*removeHeap Function
Removes the root node and returns this node.*/
Heap *removeHeap(Heap *heap);

/*heapify Function
Returns an heapified array.*/
Heap *heapify(Heap *heap);

/*getParent Function
Returns the parent's index of heap[i].*/
int getParent(int i);

/*getRight Function
Returns the right child's index of heap[i]*/
int getRight(int i);

/*getLeft Function
Returns the right left's index of heap[i]*/
int getLeft(int i);

/*emptyHeap Function
Returns 1 if heap is empty.Otherwise, returns 0*/
int emptyHeap(Heap *heap);

/*climHeap Function
Ride up the last heap element untill the array is heapified.*/
void climbHeap(Heap *heap, int i);

/*free Function
Liberates the memory space of a simple node*/
void freeHeap(Heap *heap);

/*runningHeap Function
Prints the heap.*/
void runningHeap(Heap *heap);

#endif