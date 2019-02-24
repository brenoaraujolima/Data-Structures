

#include "queue.h"
#include<stdio.h>
#include<stdlib.h>

struct node {
    char *name;
    struct node *next;
};

struct queue {
    Node *head;
    Node *tale;
};

Queue *createQueue(void) {
    Queue *queue = (Queue *) malloc(sizeof(Queue));
    if(queue == NULL) {
        printf("no memory");
        exit(1);
    }
    queue->head = NULL;
    queue->tale = NULL;
    return queue;
}

Queue *insertQueue(Queue *queue, char *name) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->name = name;
    node->next = NULL;
    if(emptyQueue(queue)) {
        queue->head = node;
        queue->tale = node;
    }
    else {
        queue->tale->next = node;
        queue->tale = node;    
    }
    return queue;
}

Queue *removeQueue(Queue *queue) {
    if(emptyQueue(queue)) {
        printf("Empty Queue");
        exit(1);
    }
    else {
        queue->head = queue->head->next;
        return queue;
    }
}
int emptyQueue(Queue *queue) {
    return (queue->head == NULL);
}

void freeQueue(Queue *queue) {
    free(queue);
    queue = NULL;
}
void runningQueue(Queue *queue) {
    Node *auxNode;
    for(auxNode = queue->head; auxNode!=NULL; auxNode = auxNode->next) {
        printf("%s\n", auxNode->name);
    }
}
