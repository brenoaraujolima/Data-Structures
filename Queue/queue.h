#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

typedef struct queue Queue;
typedef struct node Node;

/*createQueue Funcion
Returns a queue initialized.*/
Queue *createQueue(void);

/*insertQueue
Inserts on a queue a person named "name" and return the updated queue.*/
Queue *insertQueue(Queue *queue, char *name);

/*removeQueue Function
Removes an element from the queue(dequeue) and returns this element.*/
Queue *removeQueue(Queue *queue);

/*emptyQueue
Returns 1 if queue is empty and 0, otherwise.*/
int emptyQueue(Queue *queue);

/*freeQueue Function
Liberates a block memory occupied by a queue*/
void freeQueue(Queue *queue);

/*runningQueue Function
Prints the queue.*/
void runningQueue(Queue *queue);

#endif