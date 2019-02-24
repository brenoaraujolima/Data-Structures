#include<stdio.h>
#include "heap.h"

void main() {

    Heap *heap = createHeap();

    heap = insertionHeap(heap, "Bernardo", 31);
    heap = insertionHeap(heap, "Ana", 40);
    heap = insertionHeap(heap, "Ricardo", 45);
    heap = insertionHeap(heap, "Camila", 15);
    heap = insertionHeap(heap, "Paulo", 42);
    heap = insertionHeap(heap, "Julia", 20);

    Student *newStudent = searchHeap(heap, 15);
    printStudent(newStudent);
    printf("--------------------------");

    runningHeap(heap);
}

