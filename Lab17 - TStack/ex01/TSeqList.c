#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TSeqList.h"

#define MAX 100

typedef struct lista{
    int qtd;
    struct aluno dados[MAX];
} TSeqList;

TSeqList* list_create(){
    TSeqList *list;
    list = (TSeqList *)malloc(MAX*sizeof(struct lista));
    if(list != NULL){
        list->qtd = 0;
        return list;
    }
}

int list_free(TSeqList *li){
    if(li!=NULL){
        free(li);
        return 0;
    } else {
        return -1;
    }
}

int list_push_back(TSeqList *li, struct aluno al){
    if(li == NULL)
        return -1;
    
    if(li->qtd == MAX)
        return -1;

    li->dados[li->qtd] = al;
    li->qtd++;
    return 0;
}

int list_pop_back(TSeqList *li){
    if(li == NULL)
        return -1;
    else
        printf("-> Passou\n");
        printf("li->qtd = %d\n", li->qtd);
    return 0;
}

int list_get_back(TSeqList *li, struct aluno *al){
    if(li==NULL)
        return -1;
    
    *al = li->dados[li->qtd-1];
    return 0;
}

int list_empty(TSeqList *li){
    if(li != NULL){
        if(li->qtd==0)
            return 0;
        else
            return 1;
    }
    return -1;
}

int list_full(TSeqList *li){
    if(li != NULL){
        if(li->qtd == MAX)
            return 0;
        else
            return 1;
    }   
    return -1; 
}

void list_print(TSeqList *li){
    if(li != NULL){
        for(int i=0; i<li->qtd; i++){
            printf("Aluno %d:\n", i+1);
            printf("Nome: %s \n", li->dados[i].nome);
            printf("Matricula: %d\n", li->dados[i].matricula);
            printf("Nota 1: %.2f\n", li->dados[i].n1);
            printf("Nota 2: %.2f\n", li->dados[i].n2);
            printf("Nota 3: %.2f\n", li->dados[i].n3);
            printf("----------------------------------\n");
        }
    } else {
        printf("Lista vazia ou inválida!\n");
    }
}