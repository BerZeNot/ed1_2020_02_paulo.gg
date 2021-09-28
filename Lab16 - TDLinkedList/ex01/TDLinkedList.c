#include <stdio.h>
#include <stdlib.h>
#include "TDLinkedList.h"

typedef struct DLNode DLNode;

struct TDLinkedList {
    DLNode *begin;
    DLNode *end;
    int size;
};

struct DLNode {
    struct student data;
    DLNode *next;
    DLNode *prev;
};


TDLinkedList* list_create(){
    TDLinkedList *list;
    list = (TDLinkedList *)malloc(sizeof(TDLinkedList));
    if(list != NULL){
        list->begin = NULL;
        list->end = NULL;
        list->size = 0;
        return list;
    }
}

int list_push_front(TDLinkedList *list, struct student al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else {
        DLNode *node;
        node = (DLNode *)malloc(sizeof(DLNode));
        
        if(node == NULL)
            return OUT_OF_MEMORY;

        node->data = al;
        node->prev = NULL;

        if(list->size == 0){
            node->next = NULL;
            list->begin = node;
            list->end = node;
            list->size++;
            return SUCESS;

        } else {
            node->next = list->begin;
            list->begin->prev = node;
            list->begin = node;
            list->size++;
            return SUCESS;
        }
    }
    return SUCESS;
}

int list_push_back(TDLinkedList *list, struct student al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else{
        DLNode *node;
        node = (DLNode *)malloc(sizeof(DLNode));
        
        if(node == NULL)
            return OUT_OF_MEMORY;
        
        node->data = al;
        node->next = NULL;

        if(list->size == 0){
            node->prev = NULL;
            list->begin = node;
            list->end = node;
            list->size++;
        } else{
            node->prev = list->end;
            list->end->next = node;
            list->end = node;
            list->size++;

        }
    }
    return SUCESS;
}

int list_size(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else
        return list->size;
}


int list_print_foward(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else{
        DLNode *aux;
        aux = list->begin;
        while(aux != NULL){
            printf("-----------------------\n");
            printf("Name: %s\n",aux->data.name);
            printf("Registration: %d\n",aux->data.registration);
            printf("Note 1: %.2f\n",aux->data.n1);
            printf("Note 2: %.2f\n",aux->data.n2);
            printf("Note 3: %.2f\n",aux->data.n3);
            aux = aux->next;
        }
        return SUCESS;
    }
}