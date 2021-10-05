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

int list_free(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(list->begin == NULL){
            free(list);
            return SUCCESS;
        } else {
            DLNode *aux;
            aux = list->begin;
            do{
                aux = aux->next;
                free(aux->prev);
            } while(aux->next != NULL);
            free(aux);
            free(list);
            return SUCCESS;
        }
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
            return SUCCESS;

        } else {
            node->next = list->begin;
            list->begin->prev = node;
            list->begin = node;
            list->size++;
            return SUCCESS;
        }
    }
    return SUCCESS;
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
    return SUCCESS;
}

int list_pop_front(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else if(list->size == 0)
        return OUT_OF_RANGE;
    
    DLNode *aux;

    if(list->size == 1){
        aux = list->begin;
        list->begin = NULL;
        list->end = NULL;
    } else{
        aux = list->begin;
        list->begin = list->begin->next;
        list->begin->prev = NULL;
    }
    free(aux);
    list->size--;
    return SUCCESS;
}

int list_pop_back(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    
    else if(list->size == 0)
        return OUT_OF_RANGE;
    
    DLNode *aux;

    if(list->size == 1){
        aux = list->begin;
        list->begin = NULL;
        list->end = NULL;
    } else {
        aux = list->end;
        list->end = list->end->prev;
        list->end->next = NULL;
    }
    free(aux);
    list->size--;
    return SUCCESS;
}

int list_erase(TDLinkedList *list, int pos){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    
    else if(pos > list->size || pos <= 0)
        return OUT_OF_RANGE;
    
    else if(list->size == 0)
        return OUT_OF_RANGE;
    
    else if(list->size == 1){
        if(pos != 1)
            return OUT_OF_RANGE;
        else {
            DLNode *aux;
            aux = list->begin;
            list->begin = NULL;
            list->end = NULL;
            free(aux);
            list->size--;
            return SUCCESS;
        }
    }
    else {
        int currPos = 1;
        DLNode *aux;
        aux = list->begin;
        while(currPos < pos){
            aux = aux->next;
            currPos++;
        }
        aux->prev->next = aux->next;
        aux->next->prev = aux->prev;
        free(aux);
        list->size--;
        return SUCCESS;
        
    }
}

int list_find_pos(TDLinkedList *list, int pos, struct student *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else if(pos > list->size || pos <= 0)
        return ELEM_NOT_FOUND;
    

    if(list->size = 0)
        return ELEM_NOT_FOUND;
    else if(list->size == 1){
        if(pos != 1)
            return ELEM_NOT_FOUND;
        else {
            *al = list->begin->data;
            return SUCCESS;
        }
    } else {
        DLNode *aux;
        aux = list->begin;
        int currPos=1;
        while(currPos < pos){
            aux = aux->next;
            currPos++;
        }
        *al = aux->data;
        return SUCCESS;
    }
}

int list_find_mat(TDLinkedList *list, int nmat, struct student *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else{
        DLNode *aux;
        aux = list->begin;
        
        if(list->size == 0)
            return ELEM_NOT_FOUND;
        else if(list->size == 1){
            if(aux->data.registration != nmat)
                return ELEM_NOT_FOUND;
            else{
                *al = aux->data;
                return SUCCESS;
            }
        } else {
            while((aux != NULL ) && aux->data.registration != nmat){
                aux = aux->next;
            }
            if(aux == NULL)
                return ELEM_NOT_FOUND;
            else{
                *al = aux->data;
                return SUCCESS;
            }
        }
    }
}

int list_front(TDLinkedList *list, struct student *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else {
        if(list->size == 0)
            return ELEM_NOT_FOUND;
        else{
            *al = list->begin->data;
            return SUCCESS;
        }
    }
}

int list_back(TDLinkedList *list, struct student *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(list->size == 0)
            return ELEM_NOT_FOUND;
        else{
            *al = list->end->data;
            return SUCCESS;
        }
    }
}

int list_get_pos(TDLinkedList *list, int nmat, int *pos){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(list->size == 0)
            return ELEM_NOT_FOUND;
        else if(list->size == 1){
            if(list->begin->data.registration != nmat)
                return ELEM_NOT_FOUND;
            else{
                *pos = 1;
                return SUCCESS;
            }
        } else {
            DLNode *aux;
            int currPos=1;
            aux = list->begin;
            
            while((aux != NULL) && aux->data.registration != nmat){
                aux = aux->next;
                currPos++;
            }
            if(aux == NULL)
                return ELEM_NOT_FOUND;
            else{
                *pos = currPos;
                return SUCCESS;
            }
        }
    }
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
        return SUCCESS;
    }
}

int list_print_reverse(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    else {
        DLNode *aux;
        aux = list->end;
        while(aux != NULL){
            printf("-----------------------\n");
            printf("Name: %s\n",aux->data.name);
            printf("Registration: %d\n",aux->data.registration);
            printf("Note 1: %.2f\n",aux->data.n1);
            printf("Note 2: %.2f\n",aux->data.n2);
            printf("Note 3: %.2f\n",aux->data.n3);
            aux = aux->prev;
        }
        return SUCCESS;
    }
}