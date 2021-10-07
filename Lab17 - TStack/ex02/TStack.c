#include <stdlib.h>
#include <stdio.h>
#include "TStack.h"
#include "TLinkedList.h"



// é possível criar a lista
struct TStack{
    TLinkedList *list;
};


TStack *stack_create(){
    TStack *st;
    st = malloc(sizeof(TStack));
    if (st != NULL){
        st->list = list_create();
        if (st->list == NULL){
            free(st);
            return NULL;
        }
    }
    return st;
}

int stack_free(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else
        return list_free(st->list);
}

int stack_push(TStack *st, struct aluno al){
    if (st == NULL)
        return INVALID_NULL_POINTER;
    else
        return list_push_back(st->list, al);

}

int stack_pop(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else{
        return list_pop_back(st->list);
    }

}

int stack_top(TStack *st, struct aluno *al){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else
        return list_get_back(st->list, al);
}

// Verifies if the list is empty
// Return:
// 0 - list empty
// 1 - list is not empty
int stack_empty(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else
        return list_empty(st->list);
}

int stack_print(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else{
        list_print(st->list);
        return SUCCESS;
    }
}