#include <stdio.h>
#include <stdlib.h>
#include "TStack.h"


typedef struct St_Node St_Node;

struct St_Node{
    char character;
    St_Node *next;
};

struct TStack{
    int size;
    int qtd;
    St_Node *top;
};



TStack *stack_create(int size){
    TStack *st;
    st = malloc(sizeof(TStack));
    if(st == NULL){
        free(st);
        return NULL;
    }
    else{
        st->qtd = 0;
        st->size = size;
        st->top = NULL;
        return st;
    }
}

int stack_push(TStack *st, char character){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(st->qtd == st->size)
            return STACK_IS_FULL;

        St_Node *node;
        node = (St_Node *)malloc(sizeof(St_Node));
        if(node == NULL)
            return OUT_OF_MEMORY;
        else{
            node->character = character;
            node->next = st->top;
            st->top = node;
            st->qtd++;
            return SUCCESS;
        }
    }
}

int stack_pop(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(st->qtd == 0){
            return STACK_IS_EMPTY;
        } else {
            St_Node *aux;
            aux = st->top;
            st->top = st->top->next;
            free(aux);
            st->qtd--;
            return SUCCESS;
        }
    }
}

int stack_top(TStack *st, char *character){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(st->qtd == 0)
            return STACK_IS_EMPTY;
        else{
            *character = st->top->character;
            return SUCCESS;
        }
    }
}

int stack_empty(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(st->qtd == 0)
            return 0;
        else
            return 1;
    }
}

int stack_full(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else {
        if(st->qtd == st->size)
            return 0;
        else
            return 1;
    }
}

int stack_print(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    else{
        St_Node *aux;
        aux = st->top;
        while (aux !=  NULL){
            printf("|_%c_|\n", aux->character);
            aux = aux->next;
        }
        return SUCCESS;
        
    }
}