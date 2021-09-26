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
    // Amount of elements on list
    int size; 
    // indicates if the list is sorted by registration number
    // 0 - not sorted; 1 - sorted;
    int sorted; 
};



TLinkedList* list_create(int sorted){
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if(list != NULL){
        list->head = NULL;
        list->size = 0;
        list->sorted = sorted;
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
            return SUCESS;
        } else {
            while(aux != NULL){
                li->head = aux->next;
                free(aux);
                aux = li->head;
            }
            free(li);
            return SUCESS;
        }
    }
}

int list_push_front(TLinkedList *li, struct aluno al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    
    if(li->sorted == 1)
        return LIST_SORTED_EXCEPTION;

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
    li->size++;
    return SUCESS;
}

int list_push_back(TLinkedList *li, struct aluno al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    
    if(li->sorted == 1)
        return LIST_SORTED_EXCEPTION;

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
    li->size++;
    return SUCESS;
}

int list_insert_sorted(TLinkedList *li, struct aluno al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    
    else if(li->sorted == 0)
        return LIST_NOT_SORTED_EXCEPTION;

    else{

        list_node *node;
        node = (list_node*)malloc(sizeof(list_node));
        if(node == NULL)
            return OUT_OF_MEMORY;
        
        node->data = al;
        
        if(li->head == NULL){    
            li->head = node;
            node->next = NULL;
            li->size++;
            return SUCESS;
        } else if(li->head->next == NULL){
            if(li->head->data.matricula < node->data.matricula){
                li->head->next = node;
            } else {
                node->next = li->head;
                li->head = node;
                li->size++;
                return SUCESS;
            }
        
        } else {
            list_node *prev, *curr;
            prev = NULL;
            curr = li->head;

            while(curr != NULL && curr->data.matricula < node->data.matricula){
                prev = curr;
                curr = curr->next;
            }
            if(prev == NULL){
                node->next = li->head;
                li->head = node;
            } else{
                prev->next = node;
                node->next = curr;
            }
            li->size++;
            return SUCESS;
        }
    }
}

int list_size(TLinkedList *li){
    return li->size;
}

int list_pop_front(TLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    else{
        if(li->head == NULL)
            return SUCESS;
        else{
            list_node *aux;
            aux = li->head;
            li->head = li->head->next;
            free(aux);
            li->size--;
            return SUCESS;
        }
    } 
};

int list_pop_back(TLinkedList *li){
    if(li == NULL)
        return SUCESS;
    else{
        if(li->head == NULL)
            return SUCESS;
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
            li->size--;
            return SUCESS;
        }
    }
}

int list_erase_data(TLinkedList *li, int mat){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(li->head == NULL)
            ELEM_NOT_FOUND;

        else{
            list_node *prev, *curr;
            prev = li->head;
            curr = li->head;
            while(curr->next!=NULL && curr->data.matricula != mat){
                prev = curr;
                curr = curr->next;
            }
            if(curr->next == NULL)
                return ELEM_NOT_FOUND;
            else{
                prev->next = curr->next;
                free(curr);
                li->size--;
                return SUCESS;
            }
        }
    }
}

int list_erase_pos(TLinkedList *li, int pos){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    
    else if(pos <=0)
        return OUT_OF_RANGE;

    else{
        if(li->head == NULL)
            return ELEM_NOT_FOUND;
        else{
            int currPos = 1; // Current Position
            list_node *prev, *curr;
            prev = li->head;
            curr = li->head;
            while(curr->next != NULL && currPos < pos){
                prev = curr;
                curr = curr->next;
                currPos++;
            }
            if(currPos == pos){
                prev->next = curr->next;
                free(curr);
                li->size--;
                return SUCESS;
            }
            else
                return ELEM_NOT_FOUND;
        }
    }
}

int list_find_pos(TLinkedList *li, int pos, struct aluno *al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else if(pos <= 0 || pos > list_size(li))
        return OUT_OF_RANGE;
    else {
        int currPos = 1; // Current Position
        list_node *curr;
        curr = li->head;
        while(currPos < pos && curr->next != NULL){
            currPos++;
            curr = curr->next;
        }
        if(currPos == pos){
            *al = curr->data;
            return SUCESS;
        }
        else
            return ELEM_NOT_FOUND;
    }
}

int list_find_mat(TLinkedList *li, int nmat, struct aluno *al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(li->head == NULL)
            return ELEM_NOT_FOUND;
        else{
            list_node *curr;
            curr = li->head;
            while(curr != NULL && curr->data.matricula != nmat){
                curr = curr->next;
            }
            if(curr == NULL)
                return ELEM_NOT_FOUND;
            else if(curr->data.matricula == nmat){
                *al = curr->data;
                return SUCESS;
            }
            return ELEM_NOT_FOUND;
        }
    }
}

int list_back(TLinkedList *li, struct aluno *al){
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
                return SUCESS;
            } else {
                return ELEM_NOT_FOUND;
            }
                
        }
    }
}

int list_get_pos(TLinkedList *li, int nmat, int *pos){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else{
        if(li->head == NULL)
            return ELEM_NOT_FOUND;
        else{
            list_node *curr;
            int currPos = 1;
            curr = li->head;
            while(curr != NULL && curr->data.matricula != nmat){
                curr = curr->next;
                currPos++;
            }
            if(curr == NULL)
                return ELEM_NOT_FOUND;
            else if(curr->data.matricula == nmat){
                *pos = currPos;
                return SUCESS;
            }
        }
    }
}

int list_print(TLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    else{
        list_node *aux;
        aux = li->head;

        if(aux == NULL)
            return SUCESS;
            
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
    return SUCESS;
}