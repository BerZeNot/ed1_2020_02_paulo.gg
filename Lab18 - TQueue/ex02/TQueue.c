#include <stdio.h>
#include <stdlib.h>
#include "TQueue.h"

typedef struct queue_node queue_node;

struct queue_node{
    queue_node *next;
    struct aluno data;
};

struct TQueue{  
    queue_node *first;
    queue_node *last;
    int size;
};

TQueue *queue_create(){
    TQueue *queue;
    queue = malloc(sizeof(TQueue));
    if(queue != NULL){
        queue->first = NULL;
        queue->last = NULL;
        queue->size = 0;
        return queue;
    }
}

int queue_free(TQueue *queue){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(queue->size == 0){
            free(queue);
            return SUCCESS;
        } else {
            queue_node *aux;
            aux = queue->first;
            while(aux != NULL){
                queue->first = aux->next;
                free(aux);
                aux = queue->first;
            }
            free(queue);
            return SUCCESS;
        }
    }
}

int queue_enqueue(TQueue *queue, struct aluno al){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else{
        queue_node *node;
        node = malloc(sizeof(queue_node));
        node->data = al;
        node->next = NULL;
        if(queue->size == 0){
            queue->first = node;
            queue->last = node;
            queue->size++;
        } else {
            queue->last->next = node;
            queue->last = node;
            queue->size++;
        }
        return SUCCESS;
    }
}

int queue_dequeue(TQueue *queue){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(queue->size == 0)
            return QUEUE_IS_EMPTY;
        else if(queue->size == 1){
            queue_node *aux;
            aux = queue->first;
            queue->first = NULL;
            queue->last = NULL;
            queue->size--;
            free(aux);
            return SUCCESS;
        }
        else{
            queue_node *aux;
            aux = queue->first;
            queue->first = queue->first->next;
            free(aux);
            queue->size--;
            return SUCCESS;
        }
    }
}

int queue_size(TQueue *queue){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else
        return queue->size;
}

int queue_get_first(TQueue *queue, struct aluno *al){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else{
        *al = queue->first->data;
        return SUCCESS;
    }
}

int queue_print(TQueue *queue){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else{
        queue_node *aux;
        aux = queue->first;
        if(aux == NULL){
            return SUCCESS;
        } else {
            while (aux != NULL){
                printf("Nome: %s\n", aux->data.nome);
                printf("Matrícula: %d\n", aux->data.matricula);
                printf("N1: %.2f\n", aux->data.n1);
                printf("N2: %.2f\n", aux->data.n2);
                printf("N3: %.2f\n", aux->data.n3);
                printf("-------------------------\n");
                aux = aux->next;   
            }
            return SUCCESS;
        }
    }
}