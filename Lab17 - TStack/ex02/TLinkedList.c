#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TLinkedList.h"


typedef struct list_node list_node;

struct list_node{
    struct aluno data;
    list_node *next;
};

struct TLinkedList{
    list_node *head;
};
// OK
TLinkedList* list_create(){
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if(list != NULL){
        list->head = NULL;
        return list;
    }
}

// OK
int list_free(TLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *aux;
        aux = li->head;
        if(aux == NULL){
            free(li);
            return SUCCESS;
        } else {
            while(aux != NULL){
                li->head = aux->next;
                free(aux);
                aux = li->head;
            }
            free(li);
            return SUCCESS;
        }
    }
}

// OK
int list_push_back(TLinkedList *li, struct aluno al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    
    list_node *node;
    node = malloc(sizeof(list_node));

    if(node == NULL)
        return OUT_OF_MEMORY;
    
    node->data = al;
    node->next = NULL;

    if(li->head == NULL)
        li->head = node;
    else{
        list_node *aux;
        aux = li->head;
        while(aux->next!=NULL){
            aux = aux->next;
        }
        aux->next = node;
    }
    return SUCCESS;
}

// OK
int list_pop_back(TLinkedList *li){
    if(li == NULL)
        return SUCCESS;
    else{
        if(li->head == NULL)
            return SUCCESS;
        else{
            list_node *prev, *curr;
            prev = li->head;
            curr = li->head;

            while(curr->next != NULL){
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
            free(curr);
            return SUCCESS;
        }
    }
}

// OK
int list_get_back(TLinkedList *li, struct aluno *al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(li->head == NULL)
            return ELEM_NOT_FOUND;
        else{
            list_node *curr;
            curr = li->head;
            while(curr->next != NULL)
                curr = curr->next;
            
            if(curr->next == NULL){
                *al = curr->data;
                return SUCCESS;
            } else {
                return ELEM_NOT_FOUND;
            }
                
        }
    }
}

// Auxiliary function for list_empty
int list_size(TLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    if(li->head == NULL)
        return 0;

    int size=0;
    list_node *aux;
    aux = li->head;
    size++;
    while(aux->next!= NULL){
        size++;
        aux = aux->next;
    }
    return size;
}

// OK
int list_empty(TLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else if(list_size(li) == 0)
        return 0; // it means the list is empty
    else
        return 1; // it means the list is not empty
}



// OK
int list_print(TLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *aux;
        aux = li->head;

        if(aux == NULL)
            return SUCCESS;
            
        do{
            printf("------------------\n");
            printf("Nome: %s\n", aux->data.nome);
            printf("Matrícula: %d\n",aux->data.matricula);
            printf("Nota 1: %.2f\n",aux->data.n1);
            printf("Nota 2: %.2f\n",aux->data.n2);
            printf("Nota 3: %.2f\n",aux->data.n3);
            aux = aux->next;
        } while(aux!=NULL);
    }
    return SUCCESS;
}