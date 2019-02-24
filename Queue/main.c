


#include "queue.h"
#include<stdio.h>
#include<stdlib.h>

int main() {

    Queue *queue = createQueue();

    queue = insertQueue(queue,"Cinthia");
    queue = insertQueue(queue, "Afonso");
    queue = insertQueue(queue, "Rodrigo");
    queue = insertQueue(queue, "Natalia");
    queue = insertQueue(queue, "Sergio");

    runningQueue(queue);
    printf("\n\n");

    queue = removeQueue(queue);
    queue = removeQueue(queue);

    runningQueue(queue);
    return 0;
}