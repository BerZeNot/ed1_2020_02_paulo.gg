#include <stdio.h>
#include <stdlib.h>
#include "TLinkedList.h"

typedef struct list_node list_node;

struct list_node{
    struct aluno data;
    list_node *next;
};

struct TLinkedList{
    list_node *head;
};



TLinkedList* list_create(){
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if(list != NULL){
        list->head = NULL;
        return list;
    }
}

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

int list_push_front(TLinkedList *li, struct aluno al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    
    list_node *node;
    node = malloc(sizeof(list_node));
    
    if(node == NULL)
        return OUT_OF_MEMORY;
    
    node->data = al;

    if(li->head ==NULL){
        li->head = node;
    }
    else{
        node->next = li->head;
        li->head = node;
    }
    return SUCCESS;
}

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

int list_pop_front(TLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    else{
        if(li->head == NULL)
            return SUCCESS;
        else{
            list_node *aux;
            aux = li->head;
            li->head = li->head->next;
            free(aux);
            return SUCCESS;
        }
    } 
};

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

int list_front(TLinkedList *li, struct aluno *al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(li->head == NULL)
            return ELEM_NOT_FOUND;
        else
            *al = li->head->data;
        
        return SUCCESS;
    }
}

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