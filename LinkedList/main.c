

#include "list.h"
#include<stdio.h>
#include<stdlib.h>


void main() {

    List *head = allocList();
    head = startList(head);

    //Additions
    head = addList(head, "Ronaldo");
    head = addList(head, "Jeferson");
    head = addList(head, "Aline");
    head = addList(head,"Carlos");
    head = addList(head,"Fabio");
    head = addList(head, "Karol");

    runningList(head);
    printf("\n\n\n----After Remotions----");

    //Remotions
    head = removeList(head,"Fabio");
    head = removeList(head, "Jeferson");
    head = removeList(head, "Aline");

    runningList(head);

    printf("\n\n\n");
}