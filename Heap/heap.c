

#include "heap.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct heap {
    Student *array;
    int n;  //Last element index.
};

struct student {
    char *name;
    int prior;
};

int getParent(int i) {
    if(i==1 || i==0)
        return 0;
    return (ceil((i/2)-1));
}

int getRight(int i) {
    return ((i*2)+2);
}

int getLeft(int i) {
    return ((i*2)+1);  
}

Heap *createHeap(void) {
    Heap *heap = (Heap *) malloc(sizeof(Heap));
    heap->array = (Student *) malloc(sizeof(Student));
    heap->n = -1;   //Heap vazia.
    return heap;
}

Heap *insertionHeap(Heap *heap, char *name, int prior) {
    Student newStudent;
    newStudent.name= name;
    newStudent.prior = prior;
    if(emptyHeap(heap)) {
        heap->n++;
        heap->array[0] = newStudent;
        return heap;
    }
    heap->array = (Student *) realloc(heap->array, sizeof(Student));
    heap->n++;
    heap->array[heap->n] = newStudent;
    climbHeap(heap, heap->n);
    return heap;
}

void printStudent(Student *student) {
    printf("------Student Informations------\n");
    printf("Name: %2s\n", student->name);
    printf("Priority: %2d \n", student->prior);   
}

Student *searchHeap(Heap *heap, int prior) {
    if(prior < 0) {
        printf("Sua busca nao encontrou resultados.\n");
        return NULL;
    }
    int cont;
    for(cont=0; cont<=heap->n; cont++) {
        if(heap->array[cont].prior == prior) {
            return &(heap->array[cont]); 
        }
    }
    printf("Sua busca nao encontrou resultados.\n");
    return NULL;
}
Heap *removeHeap(Heap *heap);

void climbHeap(Heap *heap, int i) {
    Student auxStudent;

    while((i >= 0) && ((heap->array[i].prior) > (heap->array[getParent(i)].prior))) {
        auxStudent = heap->array[getParent(i)];
        heap->array[getParent(i)] = heap->array[i];
        heap->array[i] = auxStudent;
        i = getParent(i);
    }
}

int emptyHeap(Heap *heap) {
    if(heap->n == -1)
        return 1;
    return 0;
}

void freeHeap(Heap *heap) {
    free(heap);
    heap = NULL;
}
void runningHeap(Heap *heap) {
    int aux;
    for(aux=0; aux<=heap->n; aux++) {
        printf("%s: %2d\n", heap->array[aux].name, heap->array[aux].prior);
    }
}
