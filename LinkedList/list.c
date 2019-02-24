


#include "list.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list {
    char *name;
    struct list *next;
};

List *allocList() {
    List* list = (List *) malloc(sizeof(List));
    return list;
}

List *startList(List *list) {
    return NULL;
}

List *addList(List *list, char *name) {
    List *newNode = allocList();
    if(newNode == NULL) {
        printf("No memory");
        exit(1);
    }
    else {
        newNode->name = name;
        newNode->next = list;
        return newNode;
    }
}

List *searchList(List *list, char *name) {
    List *aux;
    for(aux = list; aux != NULL; aux = aux->next) {
        if(!strcmp(aux->name,name))
            return aux;
    }    
    return NULL;
}

List *removeList(List *list, char *name) {
    List *before = NULL;
    List *runner = list;
    while((strcmp(runner->name, name)) && (runner != NULL)) {
        before = runner;
        runner = runner->next;
    }
    if(runner == NULL) {
        return NULL;
    }
    if(before == NULL) {
        list = list->next;
    }
    else {
        before->next = runner->next;
    }
    return list;
}

char *getName(List *list) {
    return list->name;
}


int emptyList(List *list) {
    if(list == NULL)    return 1;
    else                return 0;
}

void freeList(List *list) {
    List *aux = list;
    List*aux2;
    while(aux !=NULL) {
        aux2 = aux->next;
        free(aux);
        aux = aux2;
    }
}

void runningList(List *list) {
    List *aux;
    for(aux = list; aux != NULL; aux = aux->next) {
        printf("%s\n", aux->name);
    }
}