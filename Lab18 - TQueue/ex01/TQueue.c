#include <stdio.h>
#include <stdlib.h>
#include "TQueue.h"
#include "TLinkedList.h"

struct TQueue
{
    TLinkedList *list;
};

TQueue *queue_create(){
    TQueue *queue;
    queue = malloc(sizeof(TQueue));
    if(queue != NULL){
        queue->list = list_create();
        if(queue->list == NULL){
            free(queue);
            return NULL;
        }
    }
    return queue;
}

int queue_free(TQueue *queue){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else{
        int result;
        result = list_free(queue->list);
        if(result == SUCCESS){
            free(queue);
            return SUCCESS;
        } else 
            return result;
    }
}

int queue_enqueue(TQueue *queue, struct aluno al){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else
        return list_push_back(queue->list, al);
}

int queue_dequeue(TQueue *queue){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else
        return list_pop_front(queue->list);
}

int queue_size(TQueue *queue){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else
        return list_size(queue->list);
}

int queue_first(TQueue *queue, struct aluno *al){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else
        return list_front(queue->list, al);
}

int queue_print(TQueue *queue){
    if(queue == NULL)
        return INVALID_NULL_POINTER;
    else
        return list_print(queue->list);
}